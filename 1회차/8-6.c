#include <stdio.h>
#include <string.h> // strcmp 함수가 정의된 헤더

int main(void) {
	char buf[20];
	int line = 1;

	// 무한 반복
	while (1) {
		printf("Input string ==> ");
		scanf("%s", buf);

		// buf == quit
		if (!strcmp(buf, "quit"))
			break; // while 문 벗어남
		printf("%2d: %s\n", line++, buf);
	}
}
