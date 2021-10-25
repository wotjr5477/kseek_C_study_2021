#include <stdio.h>
int func();
int main(void) {
	int i;
	i = func(); //함수 호출, 함수 실행이 끝나면 정수값을 i로 return
	printf("%d\n", i);
}

int func() {
	return 5+7; //
}
