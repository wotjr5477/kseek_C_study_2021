#include <stdio.h>
#include <string.h>   /* strpbrk 함수가 정의된 헤더 파일 */

main()
{
   char *ptr;

   /* "seoulKorea"에서 "Ka"의 문자들 중 일치하는 첫 번째 문자는 'K'인데 
      이 문자에 대한 포인터를 반환 */
   ptr = strpbrk("seoulKorea", "Ka");
   printf("%s\n", ptr);
}