#include <stdio.h>
#include <pwd.h>
#include <sys/types.h>
#include <unistd.h>

main()
{
   uid_t uid;
   struct passwd *pw;

   /* ���� ����� ID�� ��� �� */
   uid = getuid();
   /* uid�� ���� ����� ������ ��� �� */
   pw = getpwuid(uid);
   /* pw->pw_name�� ����� ����, pw->pw_uid�� ����� ID, pw->pw_gid�� 
     ����ڰ� ���� �׷� ID, pw->pw_dir�� ������� Ȩ ���丮�� �ǹ� */
   printf("name:%s, uid:%d, gid:%d, home:%s\n", pw->pw_name, pw->pw_uid, pw->pw_gid, pw->pw_dir);

   exit(0);
}