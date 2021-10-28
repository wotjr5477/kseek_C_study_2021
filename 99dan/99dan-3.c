#include <stdio.h>

int main(int argc, char *argv[]) {
	int i;
	int dan = atoi(argv[1]);

//	printf("%s\n", argv[0]);
//	printf("%s\n", argv[1]);
	printf("==========%d단==========\n", dan);
	for (i=1; i<=9; i++) {
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
}
