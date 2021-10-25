#include <stdio.h>

void swap_val(int x, int y);
void swap_addr(int *x, int *y);

main()
{
   int a=7, b=11;

   /* ���� ���� ���� */
   swap_val(a, b);
   printf("%d %d\n", a, b);

   /* �ּҿ� ���� ���� */
   swap_addr(&a, &b);
   printf("%d %d\n", a, b);
}

void swap_val(int x, int y)
{
   int temp;

   /* x�� y�� ���� ��ȯ */
   temp = x;
   x = y;
   y = temp;
}

void swap_addr(int *x, int *y)
{
   int temp;

   /* x�� ����Ű�� ���� y�� ����Ű�� ���� ��ȯ */
   temp = *x;
   *x = *y;
   *y = temp;
}