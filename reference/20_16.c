#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

main()
{
   /* ���� ����� ID�� �˾� �� */
   printf("Userid : %d\n", getuid());
   /* ���� �׷� ID�� �˾� �� */
   printf("Groupid : %d\n", getgid());
   exit(0);
}