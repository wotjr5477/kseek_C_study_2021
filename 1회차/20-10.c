#include <stdio.h>
#include <stdlib.h> // environ

// environ
extern char **environ;

int main()
{
	while(*environ)
		printf("%s\n", *environ++);
}
