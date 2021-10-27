#include <stdio.h>
#include <stdlib.h> // malloc함수가 정의된 헤더파일
#include <string.h> // strcpy 함수 정의 헤더

int main(void) {
	// 자기 참조 구조체 선언
	struct list {
		char name[10];
		int age;
		struct list *next;
	};
	struct list *ptr;

	// struct list 형 크기의 동적 메모리를 할당하고 ptr이 가리킴
	if((ptr=(struct list *)malloc(sizeof(struct list))) == NULL)
		exit(1); //프로그램 종료
	strcpy(ptr->name, "jban");
	ptr->age=27;

	// struct list 형 크기의 동적 메모리를 할당하고 ptr->next가 가리킴
	if((ptr->next=(struct list *)malloc(sizeof(struct list))) == NULL)
		exit(1);
	strcpy(ptr->next->name, "dlim");
	ptr->next->age = 27;

	printf("%s's age: %d\n", ptr->name, ptr->age);
	printf("%s's age: %d\n", ptr->next->name, ptr->next->age);
}
