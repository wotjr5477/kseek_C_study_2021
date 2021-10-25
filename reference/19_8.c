#include <stdio.h>
#include <stdlib.h>   /* abort �Լ��� �����ϴ� ��� ���� */

void my_assert(int expression);

main()
{
   my_assert(7 == 7);
   printf("yes\n");

   my_assert(3 == 5);
   printf("no\n");
}

void my_assert(int expression)
{
   if(!(expression)) {  /* expression�� �����̸� */
      /* __FILE__�� �ҽ� ����, __LINE__�� ���� ���� */
      printf("%s:%d:Assertion failed.\n", __FILE__, __LINE__);
      abort();
   }
}