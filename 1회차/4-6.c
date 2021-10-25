#include <stdio.h>
int main(void) {
	char *str;

	str = "Hello";
	for(; *str; str++)
		printf("%s\n", str);
}
