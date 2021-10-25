#include <stdio.h>
int func(); // func()가 있다고 컴파일러에 알려주기 위해 함수 선언

int main(void) {
	printf("before function call\n");
	func(); //func() 선언이 이전에 되어있어서 호출에 문제 없음
	printf("after function call\n");
}
func() { //함수 정의
	printf("running function\n");
}
