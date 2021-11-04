#include <stdio.h>
#include <search.h> // lserch 함수 정의 헤더
#include <string.h> // strcmp 함수 정의 헤더
#define TABLESIZE 10
#define ELEMENTSIZE 15

int compare(const void *a, const void *b);

int main(void)
{
	char table[TABLESIZE][ELEMENTSIZE] = {"Hello", "Linux", "C"};
	char *ptr;
	int datanum = 3; // 데이터의 개수
	
	// table에서 "Linux"를 탐색하고 찾은 데이터에 대한 포인터 반환
	ptr = (char *)lsearch("Linux", table, &datanum, ELEMENTSIZE, compare);
	printf("%s\n", ptr);
	
	// table에서 "Programing"을 찾는데 없으면 테이블 뒤에 추가하고 이에 대한 포인터 반환
	// 테이블에 데이터가 하나 추가되므로 datanum이 1증가
	ptr = (char *)lsearch("Programming", table, &datanum, ELEMENTSIZE, compare);
	printf("%s\n", ptr);
}	
// a와 b를 비교해 같으면 0을 반환
int compare(const void *a, const void *b)
{
	return(strcmp((char *)a, (char *)b));
}
