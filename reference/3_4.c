#include <stdio.h>
main()
{
   int i, fac, n;

   i = fac = 1;
   printf("Input number ==> ");
   scanf("%d", &n);
   /* i�� n���� �۰ų� ������ 12���� �ݺ� ���� */
   while (i <= n) {
      /* 'fac = fac * i++'�� �ǹ� */
      fac *= i++;
   }
   printf("%d factorial : %d\n", n, fac);
}