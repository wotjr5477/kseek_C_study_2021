#include <stdio.h>
#include <ctype.h>   /* islower, toupper, isupper, tolower �Լ��� ���ǵ� ��� ���� */

main()
{
   int ch;

   while((ch=getchar()) != EOF) {
      /* ���� �ҹ��ڸ� */
      if(islower(ch))
         /* ���� �빮�ڷ� ��ȯ */
         ch = toupper(ch);
      /* ���� �빮�ڸ� */
      else if(isupper(ch))
         /* ���� �ҹ��ڷ� ��ȯ */
         ch = tolower(ch);
      putchar(ch);
   }
   putchar('\n');
}