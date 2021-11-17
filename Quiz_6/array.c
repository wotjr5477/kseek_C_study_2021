#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 64

int compare(const void *a, const void *b);
void print_buf(int *buf);

int main(int argc, char *argc[]){
	int buf[BUFSIZE];
	int *found, target = 0;
	
	memset(buf, -1, sizeof(buf));
	if(argc == 1) {
		perror("input error");
		exit(1);
	}
	
	for(int i = 1; i < argc; i++) {
		target = atoi(argv[i]);
		if((found = (int *)bsearch(&target, buf, BUFSIZE, sizeof(int), compare)) == NULL)
			buf[0] = target;
		else
			*found = -1;
		
		qsort(buf, BUFSIZE, sizeof(int), compare);
		print_buf(buf);
	}
	printf("result: ");
	print_buf(buf);
}

int compare(const void *a, const void *b) {
	int n1 = *(int *)a;
	int n2 = *(int *)b;
	
	if(n1 < n2) return -1;
	if(n1 > n2) return 1;
	
	return 0;
}

void print_buf(int *buf) {
	for(int j = 0; j < BUFSIZE; j++) {
		if(buf[j] != -1) printf("%d ", buf[j]);
	}
	printf("\n");
}
