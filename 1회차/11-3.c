#include <stdio.h> // scanf, printf 정의 헤더

int main(void) {
	int i;
	float j;
	char str[10];

	printf("input integer, floationg number, string >> ");
	// 10진 정수, 소수점, 문자열 형태로 입력받아 i, j, str에 저장
	scanf("%d%f%s", &i, &j, str);
	// i, j, str을 10진 정수, 소수점, 문자열 형식으로 출력
	printf("%d %f %s\n", i, j, str);
}
