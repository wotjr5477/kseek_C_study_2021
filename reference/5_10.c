#include <stdio.h>

int sum (int n);

main( )
{
   int n;
   printf("Input number => ");
   scanf("%d", &n);
   printf("sum of 1-%d : %d\n", n, sum(n));
}

int sum (int n)
{
   if (n == 1)
      /* ���ȣ���� �����ϴ� ������ ��Ÿ�� ������ n�� 1�̸� 1�� ��ȯ */
      return 1; 
   else
      /*�ڱ� �ڽ��� sum(n-1)�� ȣ���ϹǷ� ���ȣ�� */
      return n+sum(n-1); 
}