#include <stdio.h>
main()
{
   int i;

   for (i=1; i<=30; i++) {
      /* i�� 5�� ���� �������� 0�� �ƴϸ� */
      if (i%5)
         continue;   /* for ���� ���� �ݺ��� ���� */
      printf("%d ", i);
   }
   printf("\n");
}