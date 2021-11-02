#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#define MAX 64

void readline(int fd, char *buff, int buff_size);

int main(void) {
	char buff[256], buff_1[MAX], buff_2[MAX], buff_3[MAX];
	
	while(1) {
		int i = 0, j;
		
		readline(0, buff, sizeof(buff));
		printf("\nreadline...\n>> %s\n",buff); 
		
		bzero(buff_1, sizeof(buff_1));
		bzero(buff_2, sizeof(buff_2));
		bzero(buff_3, sizeof(buff_3));
		
		// first
		for(; buff[i] == ' '; i++);
		for(j = 0; buff[i]; i++) {
			if(buff[i] == ' ')
				break;		
			buff_1[j] = buff[i];
			j++;
			}
		// second
		for(; buff[i] == ' '; i++);
		for(int j = 0; buff[i]; i++) {
			if(buff[i] == ' ')
				break;		
			buff_2[j] = buff[i];
			j++;
			}
		// third
		for(; buff[i] == ' '; i++);
		for(int j = 0; buff[i]; i++) {
			if(buff[i] == ' ')
				break;		
			buff_3[j] = buff[i];
			j++;
			}
		// first에 quit
		if(!strcmp(buff_1, "quit")) {
			printf("\n>> quit\n");
			exit(0);
		}
		
		printf("\n>> FIRST : [%s]   SECOND : [%s]   THIRD : [%s]\n", buff_1, buff_2, buff_3);
	}
}

void readline(int fd, char *buff, int buff_size) {
	char c;
	bzero(buff, buff_size);
	
	for(int i=0;;i++) {
		read(fd, &c, 1); // fd : 식별자(0:표준입력..)
		if(c=='\n')
			break;
		if(i<(buff_size-1))
			*(buff+i) = c;
	}
}
