#include <stdio.h>   /* sprintf, sscanf, printf �Լ��� ���ǵ� ��� ���� */
#define MAX 100

main()
{
   int i=123;
   float j=23.456;
   char buffer1[MAX], buffer2[MAX];

   /* i�� j�� buffer1�� buffer2�� ���� */
   sprintf(buffer1, "%d", i);
   sprintf(buffer2, "%.3f", j);

   /* buffer1�� ����� �����͸� 8���� ���·� �о� i�� ���� */
   sscanf(buffer1, "%o", &i);
   printf("%d\n", i);

   /* buffer2�� ����� �����͸� ���� ���·� �о� j�� ���� */
   sscanf(buffer2, "%e", &j);
   printf("%e\n", j);
}
