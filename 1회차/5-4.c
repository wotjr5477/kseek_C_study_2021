extern int count; // 외부 변수 count를 재선언. 외부변수 count를 참조한다는 의미

void func(void) {
	count ++; // 다른 파일에서 선언한 외부 변수 count 사용
}
