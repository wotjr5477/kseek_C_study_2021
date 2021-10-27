#include <stdio.h> // fopen, fclose 함수 정의 헤더

int main(void) {
	FILE *fp; // FILE 형은 stdio.h 헤더파일에 정의되어 있음

	// jban 파일을 읽기 전용으로 열기
	// 반환되는 값은 jban 파일에 대한 파일 포인터로 fp에 저장
	fp = fopen("jban", "r");

	// fp 파일을 닫기, fp는 fopen에 의해 반환된 값
	fclose(fp);
}
