#include <stdio.h>
#define MAX 20   /* �迭�� ũ�⸦ ��Ÿ���� ��ũ�η� MAX�� ��ȣ ����� 20�� �ǹ� */

main()
{
   int i, num;
   int arr[MAX];   /* �迭 ���� ���� : MAX ũ���� int�� �迭�� �����Ѵ�.  */

   printf("Input number of data ==> ");
   scanf("%d", &num);  /* �������� �� �Է� : int�� �����͸� �Է¹޾� arr[i]�� �����Ѵ�.*/

   /* ǥ���Է���ġ(Ű����)�� ���� num���� ������ �Է� */
   for(i=0; i<num; i++) {
      printf("%dth number ==> ", i+1);
      scanf("%d", &arr[i]);
   }

   /* �Է� ���� �����͸� ��� */
   printf("\nInput data\n");
   for(i=0; i<num; i++)
      printf("%d ", arr[i]);

   /* arr�� ����� �����͸� ��(num-1)�������� ��(0)���� ��, �������� ����Ѵ�. */
   printf("\nReverse data\n");
   for(i=num-1; i>=0; i--)
      printf("%d ", arr[i]);
   printf("\n");
}