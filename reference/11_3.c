#include <stdio.h>   /* scanf, printf �Լ��� ���ǵ� ��� ���� */

main()
{
   int i;
   float j;
   char str[10];

   printf("input integer, floating number, string ==> ");
   /* 10�� ����, �Ҽ���, ���ڿ� �������� �Է¹޾� i, j, str�� ���� */
   scanf("%d%f%s", &i, &j, str);
   /* i, j, str�� 10�� ����, �Ҽ���, ���ڿ� �������� ��� */
   printf("%d %f %s\n", i, j, str);
}