#include <stdio.h>
main() 
{
   int i=10;
   int *ptr;   /* ������ ���� ptr ���� */

   ptr = &i;   /* i�� �ּҸ� ptr�� ���� */
   (*ptr)++;   /* ptr�� ����Ű�� ������ 1 ���� */
   printf("%d\n", i);
}