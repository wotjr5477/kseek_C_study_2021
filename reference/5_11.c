#include <stdio.h>

int fibo (int n);

main( )
{
   int n;
   printf("Input number => ");
   scanf("%d", &n);
   printf("%d'th fibonacci number : %d\n", n, fibo(n));
}
 
int fibo (int n)
{
   /* ���ȣ���� �����ϴ� �������� n�� 1�̰ų� 2�̸� 1�� ��ȯ */
   if (n==1 || n==2)
      return 1; 
   else 
      /* �ڱ� �ڽ��� fibo�� ȣ���ϹǷ� ���ȣ�� */
      return fibo(n-1)+fibo(n-2); 
}