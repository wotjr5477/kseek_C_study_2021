#include <stdio.h> 
#include <stdlib.h>   /* srand, rand �Լ��� ���ǵ� ��� ���� */
#include <time.h>   /* time �Լ��� ���ǵ� ��� ���� */

main()
{
   int i;

   /* seed�� �׻� �ٲ�� time �Լ��� �ξ� �ʱ�ȭ */
   srand((unsigned)time(NULL));

   for(i=0; i<10; i++) {
      /* ������ �����ϰ� �̸� 100���� ���� �������� ��� */
      printf("%d ", rand()%100);
   }
   printf("\n");
}