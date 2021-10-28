#include <stdio.h>

int main(void) {
	int i;
	int dan = 1;
	
	while (dan <= 9) {
		printf("==========%d단==========\n", dan);
		for (i=1; i<=9; i++) {
			printf("%d * %d = %d\n", dan, i, dan * i);
		}
		printf("\n");
		dan++;
	}
}

