#include <stdio.h>
int main(void) {
	int a, b, c=2, d=2; // c와 d를 2로 설정
	a = ++c; // 선증가: c가 증가된 다음값이 a에 할당
	b = d++; // 후증가: d의 값이 먼저 b에 할당
	printf("a : %d\nb : %d\nc : %d\nd : %d\n", a, b, c, d);
}

