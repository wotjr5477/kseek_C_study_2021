#include <stdio.h>

void func(void);

/* �ܺ� ���� count ���� */
int count=0;

main()
{
   int i;

   for(i=0; i<10; i++)
      func();
   /* �ܺ� ���� count ��� */
   printf("count : %d\n", count);
}

void func(void)
{
   /* �ܺ� ���� count ��� */
   count++;
}