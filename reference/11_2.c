#include <stdio.h>   /* gets, puts �Լ��� ���ǵ� ��� ���� */
#define MAX 128

main()
{
   char str[MAX];

   /* ǥ�� �Է����� �� ���� ���ڿ��� �Է¹޾� str�� ���� */
   while(gets(str) != NULL) {
      /* ���ڿ� str�� ǥ�� ������� ����ϰ� ���� */
      puts(str);
   }
}