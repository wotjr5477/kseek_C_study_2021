#include <stdio.h>

void func(void);

/* �ܺ� ���� ���� count ���� */
static int count=0;

main()
{
   int i;

   for(i=0; i<10; i++)
      func();
   printf("count : %d\n", count);
}