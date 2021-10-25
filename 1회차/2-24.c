#include <stdio.h>
func(int a, int b); //함수선언, int값을 반환한다는 것을 컴파일러에 알림, func(int, int)도 가능
int main(void) {
	func(11, 7);
}

func(int a, int b) {
	printf("%d %d\n", a, b);
}

