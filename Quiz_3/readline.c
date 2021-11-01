#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int readline(int fd, char *buff, int buff_size);

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

int readline(int fd, char *buff, int buff_size) {
	char c;
	int i, rc;
	
	bzero(buff, buff_size);

	for(i=0;;i++) {
		rc = read(fd, &c, 1);
		if(rc<=0 || c=='\n')
			break;
		if(i<(buff_size-1))
			*(buff+i) = c;
	}
}
	
