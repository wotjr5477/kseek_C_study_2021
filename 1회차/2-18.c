#include <stdio.h>
int main(void) {
	// const를 사용해 값을 변경 할 수 없는 변수 i 선언
	const int i = 10;
	i = 20; //값을 변경할 수 없는 변수 i의 값을 변경하려고 함
	printf("%d\n", i);
}
