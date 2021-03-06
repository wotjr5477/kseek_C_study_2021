#include <stdio.h>
#include <ctype.h>   /* islower, toupper, isupper, tolower 함수가 정의된 헤더 파일 */

main()
{
   int ch;

   while((ch=getchar()) != EOF) {
      /* 영문 소문자면 */
      if(islower(ch))
         /* 영문 대문자로 변환 */
         ch = toupper(ch);
      /* 영문 대문자면 */
      else if(isupper(ch))
         /* 영문 소문자로 변환 */
         ch = tolower(ch);
      putchar(ch);
   }
   putchar('\n');
}