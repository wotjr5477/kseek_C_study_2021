#include <stdio.h>

int main(void) {
	unsigned char *t = "안녕";
	for(;*t;t++)
		printf("%d\n", *t);
}
