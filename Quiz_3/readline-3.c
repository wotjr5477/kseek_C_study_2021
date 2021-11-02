#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void readline(int fd, char *buff, int buff_size);

int main(int argc, char **argv) {
	struct stat st;
	char buff_line[256];
	
	if(stat(argv[1], &st) == -1) { // argv[1] 파일에 대한 정보 st에 저장
		perror("stat failed");
		exit(1);
       } // st.st_size는 파일 크기, 외에도 다른 값들 존재
       printf("file size : %ld byte\n", st.st_size);
        
       int fsize = st.st_size;
       int fd;
       int line = 1;
	
	if((fd = open(argv[1], O_RDONLY)) == -1) { //파일을 읽기 상태로 열기
		perror("open failed\n");
		exit(1);
	}
	char* buff = (char*)malloc(fsize+1);	
       	read(fd, buff, fsize); // 전체 읽기
	printf("buff length : %d\n", sizeof(buff));
	printf("fd = %d\n", fd);
	printf("%s\n", buff);
	
	readline(fd, buff_line, sizeof(buff_line));
	printf("readline...\n>> %s\n", buff);
//	for(;;) { // for-무한루프
//		readline(0, buff, sizeof(buff));
//		printf("%s\n", buff);
//		if(!strcmp(buff, "quit")) {
//			break;
//		}
//	}
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
