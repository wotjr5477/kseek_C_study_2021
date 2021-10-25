#include <stdio.h>
func()
{printf("running function\n");
}

int main(void) {
	printf("before function call\n");
	func();
	printf("after function call\n");
}
