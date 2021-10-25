#include <stdio.h>

main()
{
   FILE *fp;

   if ((fp=fopen("nodata", "r")) == NULL) { /* fopen 함수 호출 오류 발생하면 */
      perror("ERROR");
      exit(1);
   }
   exit(0);
}