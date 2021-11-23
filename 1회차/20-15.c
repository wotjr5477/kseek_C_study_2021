#include <stdio.h>
#include <stdlib.h> // getenv, unsetenv

int main()
{
	char *value;
	
	if(( value = getenv("HOME")) != NULL)
		printf("HOME : %s\n", value);
	else
		printf("HOME : no value\n");
	
	// HOME 환경 변수 삭제
	unsetenv("HOME");
	
	// HOME 환경 변수가 없으므로 NULL 반환
	if((value = getenv("HOME")) != NULL)
		printf("HOME : %s\n", value);
	else
		printf("HOME : no value\n");
	
	exit(0);
}
