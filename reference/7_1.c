#include <stdio.h>
#define DAY 365   /* ��ũ�� DAY ���� */
#define TIME 24   /* ��ũ�� TIME ���� */
#define MINUTE 60   /* ��ũ�� MINUTE ���� */
#define SECOND 60   /* ��ũ�� SECOND ���� */

main()
{
   long int sec;
   /* ��ũ�θ� �̿��� ��ó���ϸ� �ش� ���ڿ��� �ٲ��. */
   sec = DAY*TIME*MINUTE*SECOND; 
   printf("one year is %ld second\n", sec);
}