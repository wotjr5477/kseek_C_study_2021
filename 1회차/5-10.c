#include <stdio.h>

int sum (int n);

int main(void) {
	int n;
	printf("Input number : ");
	scanf("%d", &n);
	printf("sum of 1-%d :%d\n", n, sum(n));
}

int sum(int n) {
	if (n==1)
		return 1; // 재귀호출을 종료하는 조건으로 n=1이면 1을 반환
	else
		return n+sum(n-1); // 자기 자신인 sum(n-1)을 호출하므로 재귀호출
}
