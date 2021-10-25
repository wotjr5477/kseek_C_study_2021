#include <stdio.h>
#define NDEBUG  /* NDEBUG를 정의하면 assert 호출 문장을 실행하지 않음 */
#include <assert.h>

main()
{
   FILE *fp;
   
   fp=fopen("yesdata", "r");
   assert(fp);  /* 실행되지 않음 */
   printf("yesdata exist\n");
   fclose(fp);
 
   fp=fopen("nodata", "r");
   assert(fp);  /* 실행되지 않음 */
   printf("nodata exist\n");
   fclose(fp);

   exit(0);
}