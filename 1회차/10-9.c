#include <stdio.h>
#include <string.h> // memcmp 함수가 정의된 헤더 파일

int main(void) {
	char *quit = "quit";
	char *string;

	while(1) {
		printf("Input string ==> ");
		scanf("%s", string);
		
		// string과 quit의 처음 4바이트를 비교해 같으면 0을 반환하므로 좆건이 참
		if(!memcmp(string, quit, 4))
			break;
		printf("%s\n", string);
	}
}
