#include <stdio.h>
#include <grp.h>
#include <unistd.h>
#include <sys/types.h>

main()
{
   gid_t gid;
   struct group *pg;
   int i;

   /* �׷� ID�� ���� */
   gid = getgid();
   /* �׷� ������ ���� */
   pg = getgrgid(gid);
   printf("group name : %s\n", pg->gr_name);  /* pg->gr_name�� �׷��� �̸� */
   exit(0);
}