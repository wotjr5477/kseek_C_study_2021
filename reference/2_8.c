#include <stdio.h>
main()
{
    /* ������ months�� �����ϰ� ������ ���� mon�� �����Ѵ�. */
   enum months {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC } mon;
   mon = JUL;   /* JUL�� 7�� �ǹ��ϴ� ��ȣ ��� */
   printf("%d\n", mon);
   printf("%d\n", NOV);   /* NOV�� 11�� �ǹ��ϴ� ��ȣ ��� */
}