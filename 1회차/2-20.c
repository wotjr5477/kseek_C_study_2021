#include <stdio.h>
int main(void) {
	printf("before function call\n");
	func(); //함수 호출
	printf("after function call\n");
}
int func() { //함수 정의
	printf("running function \n");
}
