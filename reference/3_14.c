#include <stdio.h>
main()
{
   int a, b, max, min;

   /* �� ���� ���� �Է� */
   printf("Input integer1 ==> ");
   scanf("%d", &a);
   printf("Input integer2 ==> ");
   scanf("%d", &b);

   /* a�� b���� ũ�� ��, ���� a>b�� ���̸� �����Ѵ�. */
   if (a > b) {
      max = a;
      min = b;
   /* �׷��� ������ ��, ���� a>b�� �����̸� �����Ѵ�. */
   } else {
      max = b;
      min = a;
   }
   printf("max:%d\tmin:%d\n", max, min);
}