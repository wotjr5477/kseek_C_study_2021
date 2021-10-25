#include <stdio.h>
void func(void);
int main() {
	printf("before function call\n");
	func();
	printf("after function call\n");
}

void func(void) { //반환값과 매개변수가 없음 >> void로 명시
	printf("running function\n");
}
// 2-21.c를 이렇게 작성하는게 더 바람직함
