#include <stdio.h>
#include <stdlib.h>   /* srand, rand �Լ��� ���ǵ� ��� ���� */

main()
{
   int i;

   /* 10���� �ʱ�ȭ */
   srand(10);

   for(i=0; i<10; i++) {
      /* ������ �����ϰ� �̸� 100���� ���� �������� ��� */
      printf("%d ", rand()%100);
   }
   printf("\n");
}