#include <stdio.h>

int main(int argc, char *argv[]) {

	for(int i = 1; i < 9; i++) {
	     for(int j = 1; j < argc; j++) {
	     	int dan = atoi(argv[j]);
	     	printf("%d * %d = %d\t", dan,  i,  dan*i);
	     }
     	 printf("\n"); 
	}
}
