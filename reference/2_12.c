#include <stdio.h>
main()
{
   /* ���� ����� ���ÿ� �ʱ�ȭ */
   int i = 10000;         /* int i;�� i = 10000;�� �� ��������*/
   long int j = 100000;
   unsigned int k = 50000;
   printf("i : %d\n", i);
   printf("j : %ld\n", j);   /* %ld�� long ���� 10�� ������ ��� */
   printf("k : %u\n", k);   /* %u�� unsigned ���� 10�� ������ ��� */
}
