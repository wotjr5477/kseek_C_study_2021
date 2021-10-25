#include <stdio.h>
int main(void) {
	int i, j;

	i = (j=3, j+4); // j에 3을 대입하고, j에 4를 더한 값 >> i=7
	printf("%d %d\n", i, j);
}

