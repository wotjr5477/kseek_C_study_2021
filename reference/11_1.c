#include <stdio.h>   /* getchar, putchar 함수가 정의된 헤더 파일 */
#include <ctype.h>   /* tolower 함수가 정의된 헤더 파일 */

main()
{
   int ch;

   /* 표준 입력으로 한 문자 입력받아 ch에 저장
      입력받은 값이 파일의 끝을 의미하는 EOF이면 while 문을 벗어남 */
   while((ch=getchar()) != EOF) {
      /* ch를 표준 출력으로 출력. 만약 ch가 대문자이면 소문자로 변환해 출력 */
      putchar(tolower(ch));
   }
}