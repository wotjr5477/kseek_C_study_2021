#include <stdio.h>
main()
{
   char ch;

   printf("Input character ==> ");
   scanf("%c", &ch);
   /* ch�� ����� ������ �����ҹ��ڸ� */
   if((ch>='a')&&(ch<='z'))
      /* �����빮�ڷ� ��ȯ */
      ch = ch-'a'+'A';
   printf("%c\n", ch);
}