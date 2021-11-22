#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	
	printf("argc : %d\n", argc); // 인수의 개수 출력
	
	for(i = 0; i< argc; i++)
		printf("argv[%d] : %s\n", i, argv[i]);
		
	exit(0);
}
