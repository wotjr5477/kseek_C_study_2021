#include <stdio.h>
#include <stdlib.h> // bsearch 함수 정의 헤더
#include <string.h> // strcmp 함수 정의 헤더
#define TABLESIZE 5 // 테이블의 크기
#define ELEMENTSIZE 10 // 데이터의 크기

int compare(const void *a, const void *b);

int main(void)
{
        // table은 정렬되어 있어야 함
        char table [TABLESIZE][ELEMENTSIZE] = {"C", "Html", "Java", "Perl", "XML"};

        char *ptr;
        // table에서 "Java"를 이진탐색하고 찾은 데이터에 대한 포인터 반환
        // 만약 발견하지 못하면 NULL을 반환
        if((ptr=(char *)bsearch("Java", table, TABLESIZE, ELEMENTSIZE, compare)) == NULL)
            printf("Not Found\n");
        else
            printf("%s\n", ptr);

        // table에 "Linux"가 없으면 NULL을 반환
        if((ptr=(char *)bsearch("Linux", table, TABLESIZE, ELEMENTSIZE, compare)) == NULL)
            printf("Not Found\n");
        else
            printf("%s\n", ptr);

}

int compare(const void *a, const void *b)
{
    return strcmp((char *)a, (char *)b);
}