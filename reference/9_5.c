#include <stdio.h>
#include <stdlib.h>   /* strtol 함수가 정의된 헤더 파일 */

main()
{
   char *pt;

   /* 10진수 형태의 문자열 "3579"를 long 형 10진 정수로 변환 */
   printf("%ld\n", strtol("3579", NULL, 10));
   /* 8진수 형태의 문자열 "3574"를 long 형 10진 정수로 변환 */
   printf("%ld\n", strtol("3574", NULL, 8));
   /* base에 0을 지정하면 자동 판별하는데 문자열이 0으로 시작되므로 8진수로 인식 */
   printf("%ld\n", strtol("02521", NULL, 0));
   /* 16진수 형태의 문자열 "3A2C@q"를 long 형 10진 정수로 변환.
      @는 16진수에서 사용되는 문자가 아니므로 변환이 종료되고 pt가 @를 가리킴 */
   printf("%ld ", strtol("A2C@q", &pt, 16));
   printf("%s\n", pt);
}
