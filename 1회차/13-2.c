#include <stdio.h>
#include <search.h> // lfind 함수 정의 헤더
#include <string.h> // strcmp 함수 정의 헤더
#define TABLESIZE 10
#define ELEMENTSIZE 15

int compare(const void *a, const void *b);

int main(void)
{
	char table[TABLESIZE][ELEMENTSIZE] = {"Hello", "Linux", "C"};
	char *ptr;
	int datanum = 3;
	
	// table에서 "Linux"를 탐색하고 찾은 데이터에 대한 포인터 바노한
	if((ptr=(char *)lfind("Linux", table, &datanum, ELEMENTSIZE, compare)) == NULL)
		printf("Not Found\n");
	else
		printf("%s\n", ptr);
	
	// table에 "Programming"이 없으면 NULL 반환
	if((ptr=(char *)lfind("Programming", table, &datanum, ELEMENTSIZE, compare)) == NULL)
		printf("Not Found\n");
	else
		printf("%s\n", ptr);
}

int compare(const void *a, const void *b)
{
	return strcmp((char *)a, (char *)b);
}
