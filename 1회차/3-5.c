#include <stdio.h>
int main(void) {
	int ch, num1 = 0, nums = 0;

	while ((ch = getchar()) != EOF) { //하나의 문자를 입력받아 ch에 저장, ch == EOF가 아니면 실행, 맞으면 break, EOF(End of Field):파일의 끝
		if ((ch >= 'A') && (ch <= 'z'))
			num1++; // ch가 "A"보다 크거나 같고 "Z"보다 작거나 같으면 >> ch가 대문자라면
		else if ((ch >= 'a') && (ch <= 'z'))
			nums++; // ch가 소문자라면
	}
	printf("%d %d\n", num1, nums);
} // 도대체 어디서 어떻게 입력 받는거야ㅡㅡ
