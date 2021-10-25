#include <stdio.h>
#include <stdlib.h>   /* getenv, putenv 함수를 정의하는 헤더 파일 */

main()
{
   char *home_dir;

   /* HOME 환경 변수 값을 얻어 와서 출력 */
   if((home_dir=getenv("HOME")) != NULL)
      printf("home directory : %s\n", home_dir);

   /* HOME 환경 변수 값을 /home/jkim/book/linux로 설정 */
   putenv("HOME=/home/jkim/book/linux");

   if((home_dir=getenv("HOME")) != NULL)
      printf("home directory : %s\n", home_dir);
}