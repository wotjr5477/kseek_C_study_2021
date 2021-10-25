#include <stdio.h>
int main(void) {
	int ch = 'Z';

	do {
		printf("%c", ch--);
	} while (ch >= 'A');
	printf("\n");
}
