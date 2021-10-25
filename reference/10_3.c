#include <stdio.h>
#include <stdlib.h>   /* calloc, realloc �Լ��� ���ǵ� ��� ���� */

main()
{
   int *ptr;
   int arr[5] = {1, 2, 3, 4, 5};
   int i;

   /* int �� ��� 5���� �̷���� �迭�� �������� �Ҵ��ϰ� ptr�� ����Ŵ */
   if((ptr=(int *)calloc(5, sizeof(int))) == NULL)
      exit(1);

   /* �Ҵ�� �޸� ������ arr �� ���� */
   for(i=0; i<5; i++)
      ptr[i] = arr[i];

   /* ptr�� ����Ű�� �޸� ������ ũ�⸦ sizeof(int)*10���� �����ϰ� 
      �� ������ ���� �����͸� ��ȯ�Ͽ� ptr�� �� ������ ����Ŵ */
   if((ptr=(int *)realloc(ptr, sizeof(int)*10)) == NULL)
      exit(1);

   /* �߰��� �޸� ������ arr �� ���� */
   for(i=5; i<10; i++)
      ptr[i] = arr[i-5];

   /* �Ҵ�� �޸� ������ ����� �� ��� */
   for(i=0; i<10; i++)
      printf("%d ", ptr[i]);
   printf("\n");

   /* ����� ���� �޸� ������ ���� */
   free(ptr);
}