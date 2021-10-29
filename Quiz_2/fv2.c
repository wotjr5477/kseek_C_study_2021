// 파일 읽고 한줄씩 출력
// fopen/fread 함수 사용
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char **argv) {
        struct stat st;

        if(stat(argv[1], &st) == -1) { // argv[1] 파일에 대한 정보 st에 저장
                perror("stat failed");
                exit(1);
        } // st.st_size는 파일 크기, 외에도 다른 값들 존재
        printf("file size : %ld byte\n", st.st_size);

	int fsize = st.st_size;
	int fd;
        	int line = 1;

	if ((fd = open(argv[1], O_RDONLY)) == -1) { // 파일 읽기상태로 열기
                perror("open failed\n");
                exit(1);
	}	
         
        	char* buff = (char*)malloc(fsize+1);
        	read(fd, buff, fsize);
        	
	printf("%3d\t", line++);
        for(int i=0; i<fsize; i++) {
        	printf("%c", buff[i]);
        	if((buff[i]=='\n') && (buff[i+1] != '\0'))
        		printf("%3d\t", line++);
	}
}

