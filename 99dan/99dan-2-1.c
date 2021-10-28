#include <stdio.h>

void gugu(int dan);

int main(void) {
	int dan;
	char st='n';

	while(st=='n') {
		printf("insert dan : ");
		scanf("%d", &dan);
		
		gugu(dan);

		printf("exit?(y/n): ");
		scanf("%s", &st);
	}
}

void gugu(int dan) {
	printf("========= %d dan ==========\n", dan);

	for(int i=1; i<=9; i++) {
		printf("\t%d * %d = %d\n", dan, i, dan*i);
	}
	printf("===========================\n");
}
