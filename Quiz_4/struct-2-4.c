#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include "friend.h"

#define DATA "New.dat"

void print_fr(char *str);

int main(int argc, char *argv[]) {
	FRIEND_T fr;
	int fd, CV, CA;
	char *buf;
	
	if(argc < 2) {
		printf("조건을 입력하세요\n");
		exit(1);
	}
	
	print_fr("BEFORE");
	
// change
	if((fd = open(DATA, O_RDWR)) == -1) { // 파일을 읽고쓰기 모드로 열기
		perror("open failed\n");
		exit(1);
	}	
	for (int i=0; i < argc; i++) {
		printf("===============\n");
		printf("command : %s\n", argv[i+1]);
		buf = strtok(argv[i+1], "=");
		if(buf == NULL) {
			perror("No More Changes");
			continue;
		}
		printf("+++++++++++++++\n");
		printf("buf : %s\n", buf);
		printf("*buf : %d\n", *buf);
		printf("atoi(buf) : %d\n", atoi(buf));
		printf("objective data number >> %s\n", argv[i+1]);
		CA = atoi(buf) * sizeof(fr);
		printf("objecitve data address >> %d\n", CA);
		printf("---------------\n");
		buf = strtok(NULL, "=");
		printf("buf : %s\n", buf);
		printf("*buf : %d\n", *buf);
		printf("atoi(buf) : %d\n", atoi(buf));
		CV = atoi(buf);
		printf("data to be changed : %d\n", CV);
		
		lseek(fd, CA, SEEK_SET); // SEEK_SET:처음, _CUR:현재, _END:끝
		read(fd, &fr, sizeof(fr));
		fr.age = CV;
		
		lseek(fd, CA, SEEK_SET);
		write(fd, &fr, sizeof(fr));
	}
	close(fd);
	print_fr("AFTER");	
}	

void print_fr(char *str) {
	int fd, i = 0;
	FRIEND_T fr;
	
	printf("\n>>>>> %s <<<<<\n", str);
	
	if((fd = open(DATA, O_RDONLY)) == -1) {
		perror("open failed\n");
		exit(1);
	}
	while(read(fd, &fr, sizeof(fr)) >  0) {
		printf("[%02d] fr.age = %02d\n", i, fr.age);
		i++;
	}
	close(fd);
	printf("\n");
}
