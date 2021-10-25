#include <stdio.h>
int main(void) {
	char ch = 'a';
	int i = 256;
	// char형과 int형을 기본적으로 연산을 할 수 없으므로 더 작은 데이터 형인 char형을 int형으로 자동 변환 후 연산
	printf("%d\n", ch + i);
}
