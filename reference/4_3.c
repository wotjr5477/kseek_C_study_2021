#include <stdio.h>
 
main()
{
   float arr[3];
   int i;

   for (i=0; i<3; i++)
      /* arr[i]�� �ּ� ��� �ּҴ� ������ �����Ƿ� %u ���·� ��� */
      printf("arr[%d]: %u  ", i, &arr[i]);   
   printf("\n");
}