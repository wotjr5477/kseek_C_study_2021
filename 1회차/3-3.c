#include <stdio.h>
int main(void) {
	int a = 5, b, c, d;

	b = a > 7; // a가 7보다 큰지 비교
	printf("b = %d\n", b);

	c = a < 7; // a가 7보다 작은지 비교
	printf("c = %d\n", c);

	d = a == 5; // a가 5와 같은지 비교
	printf("d = %d\n", d);
}
