#include <stdio.h>
main()
{
   int i;

   printf("Input integer ==> ");
   scanf("%d", &i);

   switch (i) {
      case 1:
         printf("Hello 1\n");   /* i�� 1�̸� �� ���常 ���� */
         break;   /* switch �� ��� */
      case 2:
         printf("Hello 2\n");   /* i�� 2�̸� �� ���常 ���� */
         break;
      case 3:
         printf("Hello 3\n");   /* i�� 3�̸� �� ���常 ���� */
         break;
      default:
         printf("Hello others\n");   /* �� ���� ��쿡�� �� ���常 ���� */
   }
}