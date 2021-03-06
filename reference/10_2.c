#include <stdio.h>
#include <stdlib.h>   /* calloc 함수가 정의된 헤더 파일 */

main()
{
   int *ptr;
   int arr[5] = {1, 2, 3, 4, 5};
   int i;

   /* int 형 요소 5개로 이루어진 배열을 동적으로 할당하고 이에 대한 포인터를 
     반환하여 ptr이 가리킴 */
   if((ptr=(int *)calloc(5, sizeof(int))) == NULL)
      exit(1);

   /* 할당된 메모리 영역에 arr 값 저장 */
   for(i=0; i<5; i++)
      ptr[i] = arr[i];

   /* 할당된 메모리 영역에 저장된 값 출력 */
   for(i=0; i<5; i++)
      printf("%d ", ptr[i]);
   printf("\n");
}