#include <stdio.h>
main()
{
   int i, j;
   /* j ���� 3�� �����ϰ� j�� 4�� ���� ���� 7�� i�� ���� */
   i = (j=3, j+4);
   printf("%d %d\n", i, j);
}