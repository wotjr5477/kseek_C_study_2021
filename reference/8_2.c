#include <stdio.h>
#include <ctype.h>   /* isalpha �Լ��� ���ǵ� ��� ���� */

main()
{
   int ch;

   while((ch=getchar()) != EOF) {
      /* ch�� �����ڸ� ���� �ǰ� �ƴϸ� ���� */
      if(isalpha(ch))
         putchar(ch);
   }
   putchar('\n');
}