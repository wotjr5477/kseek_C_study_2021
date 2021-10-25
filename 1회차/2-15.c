#include <stdio.h>
int main(void) {
	// 문자열 지정하는 배열 선언
	// 배열의 마지막 요소에는 NULL('\0) 값이 들어가야하기 때문에
	// 최대 3개의 문자로 이루어진 문자열 저장
	char str[4];
	str[0] = 'a'; str[1] = 'b'; str[2] = 'c'; str[3] = '\0';//NULL('\0')은 문자열 끝을 의미
	printf("%s\n", str); // %s : 문자열 형태 출력
}
