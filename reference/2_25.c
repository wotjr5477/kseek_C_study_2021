#include <stdio.h>
int add(int n1, int n2);   /* 함수 선언 */
main()
{
   int result;
   /* 함수 호출. 11과 7을 보내고 함수 실행이 끝나면 정수 값을 반환받는다. */
   result = add(11, 7);   
   printf("11+7 = %d\n", result);
}
/* 함수 정의. n1과 n2에 전달받은 정수 값을 저장한 후 동작하고
   끝나면 정수 값 반환*/
int add(int n1, int n2)
{
   return n1+n2;
}