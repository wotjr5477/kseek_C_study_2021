#include <stdio.h>
#include <stdlib.h>   /* getenv, unsetenv �Լ��� �����ϴ� ��� ���� */

main()
{
   char *value;

   if((value=getenv("HOME")) != NULL)
      printf("HOME : %s\n", value);
   else
      printf("HOME : no value\n");

   /* HOME ȯ�� ������ ���� */
   unsetenv("HOME");

   /* HOME ȯ�� ���� �����Ƿ� NULL ��ȯ */
   if((value=getenv("HOME")) != NULL)
      printf("HOME : %s\n", value);
   else
      printf("HOME : no value\n");

   exit(0);
}