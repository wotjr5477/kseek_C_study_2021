#include <stdio.h>
int main(void) {
	int i;

	printf("Input integer : ");
	scanf("%d", &i);

	switch(i) { // i값과 일치하는 case부터 실행 없으면 default 실행
		case 1: 
			printf("Hello 1\n");
		case 2:
			printf("Hello 2\n");
		case 3: printf("Hello 3\n");
		default : printf("Hello others\n");
	}
}
