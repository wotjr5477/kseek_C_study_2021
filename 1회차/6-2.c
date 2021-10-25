#include <stdio.h>

int main(void) {
	struct list { // 자신의 구조체를 가리키는 포인터를 멤버로 하는 자기 참조 구조체 정의
		int data;
		struct list *next;
	};

	struct list first, second, third; // 구조체 변수 선언

	first.data = 1;
	second.data = 2;
	third.data=3;

	first.next = &second; // first의 next멤버는 second를, second는 third를 가리킴
	second.next = &third;

	printf("%d %d %d\n", first.data, first.next -> data, first.next -> next -> data);
}
