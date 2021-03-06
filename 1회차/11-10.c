#include <stdio.h>

int main(void)
{
	FILE *fp;
	int ch = 'a';
	
	// source 파일을 읽기 전용으로 열기
	fp = fopen("source", "r");
	
	// 읽기 전용인 fp 파일에 ch를 쓰고자 하므로 오류 발생
	fputc(ch, fp);
	
	// fp 파일이 오류라면
	if(ferror(fp))
		puts("error");
	// fp 파일이 오류가 아니라면
	else
		puts("no error");
		
	// 오류 정보를 초기화
	clearerr(fp);
	if(ferror(fp))
		puts("no error");
		
	fclose(fp);
}
