#include <stdio.h>
#define NAME // 치환 문자열이 없지만 이것도 정의된 것임

int main(void) {
	// NAME이 정의되어있으면
#ifndef NAME
	printf("NAME defined\n");
#endif

	// NAME이 정의되어 있지 않으면
#ifndef NAME
	printf("NAME undefined\n");
#endif

	// ADDRESS가 정의되어 있지 않으면
#ifndef ADDRESS
	printf("ADDRESS undefined\n");
#endif
}
