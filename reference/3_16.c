#include <stdio.h>
main()
{
   int i;
 
   printf("Input integer ==> ");
   scanf("%d", &i);
   /* i ���� ��ġ�ϴ� case���� �����ϰ� ��ġ�ϴ� ������� ������ default �� ����*/
   switch (i) {
      case 1:   /* i�� 1�̸� ������� ���� */
         printf("Hello 1\n");
      case 2:   /* i�� 2�̸� ������� ���� */
         printf("Hello 2\n");
      case 3:   /* i�� 3�̸� ������� ���� */
         printf("Hello 3\n");
      default:   /* �� ���� ��쿡�� ������� ���� */
         printf("Hello others\n");
   }
}
