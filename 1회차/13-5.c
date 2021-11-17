#include <stdio.h>
#include <search.h> // hcreate, hsearch

int main(void)
{
    ENTRY item;
    ENTRY *result;

    // 해시 테이블 생성. 5는 테이블에 저장할 데이터의 개수에 대한 추정값
    hcreate(5);

    // 3개의 데이터를 해시 테이블에 삽입
    item.key = "Linux";
    item.data = "Linux";

    // item을 해시 테이블에서 탐색하는데, 발견하지 못하면 item을 삽입하고 이에대한 포인터를 반환
    hsearch(item, ENTER);
    item.key = "C";
    item.data = "C";
    hsearch(item, ENTER);
    item.key = "Programming";
    item.data = "Programming";
    hsearch(item, ENTER);
    
    item.key = "Linux";
    item.data = "Linux";
    // 해시 테이블에서 데이터를 탐색하여 item을 발견하면 데이터를 출력하고 못하면 오류 메시지 출력
    if((result = hsearch(item, FIND)) == NULL)
        printf("Not Found\n");
    else
        printf("Found : %s\n", item.data);

    item.key = "Java";
    item.data = "Java";
    if((result = hsearch(item, FIND)) == NULL)
        printf("Not Found\n");
    else
        printf("Found : %s\n", result -> data);
}
