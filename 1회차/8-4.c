#include <stdio.h>
#include <ctype.h> // islower, toupper, tolower

int main(void) {
	int ch;

	while ((ch=getchar()) != EOF) {
		// 소문자면
		if(islower(ch))
			// 대문자로
			ch = toupper(ch);
		else if (isupper(ch))
			ch = tolower(ch);
		putchar(ch);
	}
	putchar("\n");
}
