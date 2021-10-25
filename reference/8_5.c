#include <stdio.h>
#include <string.h>   /* strcpy, strncpy 함수가 정의된 헤더 파일 */

main()
{
   char buf1[20] = "Linux";
   char buf2[20] = "Linux";

   strcat(buf1, " Programmnig");   /* " Programmnig"을 buf1에 연결 */
   strncat(buf2, " Programmnig", 5);   /* " Programmnig" 중 5개의 문자를 buf1에 연결 */

   printf("%s\n%s\n", buf1, buf2);
}