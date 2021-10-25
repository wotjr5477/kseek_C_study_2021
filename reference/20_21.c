#include <stdio.h>
#include <string.h>
#include <pwd.h>
#include <grp.h>
#include <unistd.h>
#include <sys/types.h>

main()
{
   uid_t uid;
   gid_t gid;
   struct passwd *pw;
   struct group *pg;
   int i;

   uid = getuid();  /* ����� ID ��� �� */
   pw = getpwuid(uid);  /* �н����� ���Ϸκ��� ����� ���� ��� �� */
   gid = getgid();  /* �׷� ID ��� �� */
   pg = getgrgid(gid);  /* �׷� ���Ϸκ��� �׷� ���� ��� �� */

   printf("uid=%d(%s) ", uid, pw->pw_name);  /* ����� ID�� ����� ���� ��� */
   printf("gid=%d(%s) groups=", gid, pg->gr_name);  /* �׷� ID�� �׷� �̸� ��� */

   /* �׷� ���Ϸκ��� ��� �׷� ������ ���ʷ� ��� �� */
   while (pg = getgrent()) {
      /* �ش� �׷쿡 ���� ��� ����� ������ ���� */
      for (i=0; pg->gr_mem[i]!=NULL; i++) {
         /* ���α׷��� ����� ����(pw->pw_name)�� pg�� ����Ű�� �׷쿡 ���� 
           ����� ������ ���ٴ� ���� �� ����ڰ� pg �׷쿡 �����ִٴ� ���� 
           �ǹ��Ѵ�. ������ ���̸� ��, �� ����� ������ ������
           pg�� ����Ű�� �׷� �̸��� ����Ѵ�. */
         if (!strcmp(pw->pw_name, pg->gr_mem[i]))
            printf("%d(%s) ", pg->gr_gid, pg->gr_name);
      }
   }
   printf("\n");
   exit(0);
}