#include <stdio.h>
main() 
{
   int arr[5] = {10, 20, 30, 40, 50};
   int *ptr;   /* ������ ���� ptr ���� */
   int i;

   /* ptr�� �̿��� arr�� ���� ���, ptr++�� ptr�� ����Ű�� �迭 ����� ���� ��� */
   for (ptr=arr, i=0; i<5; i++)
      printf("%d\n", *ptr++);
}