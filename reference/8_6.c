#include <stdio.h>
#include <string.h>   /* strcmp �Լ��� ���ǵ� ��� ���� */

main()
{
   char buf[20];
   int line=1;

   /* ���� �ݺ� */
   while(1) {
      printf("Input string ==> ");
      scanf("%s", buf);
      /* buf�� quit�� ������ */
      if(!strcmp(buf, "quit"))
         break;   /* while �� ��� */
      printf("%2d: %s\n", line++, buf);
   }
}