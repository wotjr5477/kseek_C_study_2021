#include <stdio.h>
int main(void) {
	float arr[3];
	int i;

	for (i=0; i<3; i++)
		printf("arr[%d] : %u ", i, &arr[i]);
	printf("\n");
}
