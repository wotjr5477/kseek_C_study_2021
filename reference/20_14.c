#include <stdio.h>
#include <stdlib.h>   /* setenv, getenv �Լ��� �����ϴ� ��� ���� */

main()
{
   char *value;

   /* overwrite�� 0�̹Ƿ� �̹� HOME�� �����ϸ� �������� ���� */
   setenv("HOME", "/home/jkim/book/linux", 0);
   value = getenv("HOME");
   printf("[setenv overwrite : 0] HOME : %s\n", value);

   /* overwrite�� 1�̹Ƿ� �̹� HOME�� �����ص� ���� ���� */
   setenv("HOME", "/home/jkim/book/linux", 1);
   value = getenv("HOME");
   printf("[setenv overwrite : 1] HOME : %s\n", value);

   exit(0);
}