#include <stdio.h>
#include <errno.h>   /* errno 변수를 선언하는 헤더 파일 */

main()
{
   FILE *fp;

   /* fopen 함수 호출에 실패하면 NULL을 반환 */
   if ((fp=fopen("nodata", "r")) == NULL) {  
      printf("errno = %d\n", errno);  /* 오류 발생하면 errno에 오류 번호 저장 */
      exit(1);   /* 종료하기 */
   }
   exit(0);   /* 종료하기 */
}