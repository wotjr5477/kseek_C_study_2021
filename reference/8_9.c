#include <stdio.h>
#include <string.h>   /* strlen �Լ��� ���ǵ� ��� ���� */
#define MAX 20

main()
{
   char str[MAX];
   int i, j, ch;

   printf("Input string ==> ");
   /* ���ڿ��� �Է� ���� */
   scanf("%s", str);

   /* ù ��° ���ڿ� ������ ���ڸ� ��ȯ�ϰ�, �� ��° ���ڿ� ���������� 
      �� ��° ���ڿ� ��ȯ, ... �ᱹ ���ڿ��� �Ųٷ� ��ȯ */
   for (i=0, j=strlen(str)-1; i<j; i++, j--) {
      ch = str[i];
      str[i] = str[j];
      str[j] = ch;
   }
   printf("reverse : %s\n", str);
}