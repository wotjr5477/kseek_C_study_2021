#include <stdio.h>
#include <stdlib.h>   /* calloc �Լ��� ���ǵ� ��� ���� */
#include <string.h>   /* memcpy �Լ��� ���ǵ� ��� ���� */

main()
{
   int *ptr;
   int arr[5] = {1, 2, 3, 4, 5};
   int i;

   /* int �� ��� 5���� �̷���� �迭�� �������� �Ҵ��ϰ� ptr�� ����Ŵ */
   if((ptr=(int *)calloc(5, sizeof(int))) == NULL)
      exit(1);

   /* arr�� ����Ű�� ������  5*sizeof(int) ����Ʈ�� ptr�� ����Ű�� �������� ���� */
   memcpy(ptr, arr, 5*sizeof(int));

   /* �Ҵ�� �޸� ������ ����� �� ��� */
   for(i=0; i<5; i++)
      printf("%d ", ptr[i]);
   printf("\n");
}