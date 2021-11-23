#include <stdio.h>
#include <stdlib.h> // getenv, putenv
#include <string.h> // strcpy, strcat

int main(int argc, char *argv[])
{
	char *value, *string;
	
	if(argc == 1 || argc > 3) {
		printf("Usage : a.out variable [value]\n");
		exit(1);
	}
	// argv[1] 환경 변수 값을 얻어와 출력
	if((value = getenv(argv[1])) != NULL)
		printf("%s : %s\n", argv[1], value);
	else
		printf("%s : no value\n", argv[1]);
	
	// 명령라인 인수가 세개면
	if(argc == 3) {
		// 메모리를 동적으로 할당 받음
		string = (char*)malloc(strlen(argv[1]) + strlen(argv[2]) + 2);
		// argv[1]을 string에 복사
		strcpy(string, argv[1]);
		// string 뒤에 '='를 연결
		strcat(string, "=");
		strcat(string, argv[2]);
		
		// 환경 변수 값을 변경
		putenv(string);
		
		// 변경된 환경 변수 값을 얻어와 출력
		if((value = getenv(argv[1])) != NULL)
			printf("%s's new value : %s\n", argv[1], value);
		else
			printf("error : %s\n", string);
	}
	exit(0);
}
