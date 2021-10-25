#include <stdio.h>
int main(void) {
	int ch;

	while((ch=getchar()) != EOF) {
		if (ch == '\n') {
			break;
		}
		putchar(ch);
	}
	putchar('\n');
}
