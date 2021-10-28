#include <stdio.h>

int main(int argc, char *argv[]) {
	int dan = atoi(argv[1]);
	printf("========== %d 단 ==========\n", dan);

	for (int i=1; i<=9; i++) {
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
}
