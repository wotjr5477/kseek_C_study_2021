#include <stdio.h>
#define BUFSIZE 12 // 기호상수 정의, BUFSIZE는 12에 해당하는 기호 상수
int main(void) {
	// buf[12] 와 동일, 즉, 컴파일하기 전에 BUFSIZE는 12로 바뀜
	char buf[BUFSIZE] = "Progrimming";
	printf("%s\n", buf);
}
