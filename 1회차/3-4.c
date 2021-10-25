#include <stdio.h>
int main(void) {
	int i, fac, n;

	i = 1, fac = 1;
	printf("Input no. ==> ");
	scanf("%d", &n);

	while (i <= n) { // i가 n보다 작거나 같으면 반복 실행
		fac *= i++; // 'fac = fac * i++'를 의미
	}
	printf("%d factorial : %d\n", n, fac);
}
