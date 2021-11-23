#include <stdio.h>
#include <stdlib.h> // getenv putenv

int main()
{
	char *home_dir;
	
	// HOME 환경 변수값을 얻어와 출력
	if((home_dir = getenv("HOME")) != NULL)
		printf("home directory : %s\n", home_dir);
	// HOME 환경 변수 값을 /home/jb/workspace/C/C study/1회차로 설정
	putenv("HOME=/home/jb/workspace/C/C study/1회차");
	
	if((home_dir = getenv("HOME")) != NULL)
		printf("home directory : %s\n", home_dir);
}
