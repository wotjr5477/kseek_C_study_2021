#include <stdio.h>

int main(int argc, char **argv) {       
	for(int j=1; j<=argc; j++) {
		int dan = atoi(argv[j]);
		printf("========== %d 단 ==========\n", dan);
		
		for(int i=1; i<=9; i++) {
			printf("%d * %d = %d\n", dan, i, dan*i);
		}
	}
}
