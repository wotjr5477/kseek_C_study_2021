#include <stdio.h>
#include <stdlib.h>   /* atoi �Լ��� ���ǵ� ��� ���� */

main()
{
   int i;

   /* 10�� ���� ������ ���ڿ� "23"�� "567"�� ���� 23�� 567�� ��ȯ */
   i = atoi("23")+atoi("567");
   printf("%d\n", i);
}