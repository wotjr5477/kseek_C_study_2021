#include <stdio.h>
int main(void) {
	//열거형 month를 정의, 열거형 변수 mon을 선언
	enum months {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec} mon;
	mon = Jul; // Jul = 7을 의미하는 기호상수
	printf("%d\n", mon);
	printf("%d\n", Nov); // Nov는 11을 의미하는 기호상수
	
}

