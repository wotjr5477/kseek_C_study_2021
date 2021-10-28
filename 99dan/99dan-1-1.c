#include <stdio.h>

int main(void) {
	for (int dan=1; dan<=9; dan++) {
		printf("========== %d 단 ==========\n", dan);
		for (int i=1; i<=9; i++) {
			printf("\t%d * %d = %d\n", dan, i, dan * i);
		}
	}
	printf("==========================\n");
}

