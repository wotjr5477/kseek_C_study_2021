#include <stdio.h>
#include <stdlib.h> // qsort
#include <string.h>

#define TABLESIZE 5
#define ELEMENTSIZE 15

int compare(counst void *a, const void *b);

int main(void) {
	int i;
	char table[TABLESIZE][ELEMENTSIZE] = {"Hello", "Linux", "C", "Programming", "Java"};
	// table을 퀵 정렬
	qsort(table, TABLESIZE, ELEMENTSIZE, compare);
	// 정렬된 테이블  출력
	for(i = 0; i < TABLESIZE, i++)
		printf("%s\n", table[i]);
}
// a와 b를 비교해 a가 작으면 음수, 같으면 0, 크면 양수
int compare(const void *a, const void *b) {
	return strcmp((char *)a, (char *)b);
}
