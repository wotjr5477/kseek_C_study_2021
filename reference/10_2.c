#include <stdio.h>
#include <stdlib.h>   /* calloc �Լ��� ���ǵ� ��� ���� */

main()
{
   int *ptr;
   int arr[5] = {1, 2, 3, 4, 5};
   int i;

   /* int �� ��� 5���� �̷���� �迭�� �������� �Ҵ��ϰ� �̿� ���� �����͸� 
     ��ȯ�Ͽ� ptr�� ����Ŵ */
   if((ptr=(int *)calloc(5, sizeof(int))) == NULL)
      exit(1);

   /* �Ҵ�� �޸� ������ arr �� ���� */
   for(i=0; i<5; i++)
      ptr[i] = arr[i];

   /* �Ҵ�� �޸� ������ ����� �� ��� */
   for(i=0; i<5; i++)
      printf("%d ", ptr[i]);
   printf("\n");
}