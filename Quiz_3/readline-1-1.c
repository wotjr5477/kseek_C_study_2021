#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void readline(int fd, char *buff, int buff_size);

int main(void) {
	char buff[256];

	for(;;) { // for-무한루프
		readline(0, buff, sizeof(buff));
		printf("%s\n", buff);
		if(!strcmp(buff, "quit")) {
			break;
		}
	}
}

void readline(int fd, char *buff, int buff_size) {
	char c;
	
	bzero(buff, buff_size);

	for(int i=0;;i++) {
		read(fd, &c, 1);
		if(c=='\n')
			break;
		if(i<(buff_size-1))
			*(buff+i) = c;
	}
}
	
