#include <stdio.h>
int main(void) {
	int ch = 'Z';

	while (ch >= 'A')
		printf("%c", ch--);
	printf("\n");
}
