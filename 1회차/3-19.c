#include <stdio.h>
int main(void) {
	int ch;

	for (ch='Z'; ch>='A'; ch--)
		printf("%c", ch);
	printf("\n");
}

