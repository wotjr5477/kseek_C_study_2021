#include <stdio.h>
#include <assert.h> // assert

int main()
{
	FILE *fp;
	
	fp = fopen("yesdata", "r"); // fp가 참이므로 다음 문장 실행
	assert(fp);
	printf("yesdata exist\n");
	fclose(fp); // fp 닫음
	
	fp = fopen("nodata", "r"); // nodata는 없으므로 NULL 반환
	assert(fp); // fp가 거짓이므로 오류 메시지 출력, 코어 덤푸 후 종료
	// 이후 문장 실행 안됨
	printf("nodata exist\n");
	fclose(fp);
	
	exit(0);
}
