#include <stdio.h>
#define SIZE 1000   /* ��ũ�� SIZE ���� */

main()
{
   int num;
   num = SIZE;
   printf("%d\n", num);

#undef SIZE   /* ��ũ�� SIZE ���� */
#define SIZE 5000   /* ��ũ�� SIZE ���� */

   num = SIZE;
   printf("%d\n", num);
}