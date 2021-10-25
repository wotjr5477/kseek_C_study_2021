extern int count; // 외부 정적 변수 count 재선언 불가, 메인에서 static이였기 때문인듯?

void func(void) {
	count ++;
}
