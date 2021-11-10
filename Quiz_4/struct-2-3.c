#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include "friend.h"

#define DATA "New.dat"

int main(int argc, char *argv[]) {
	int fd, i = 0;
	char *buf;
	int CV, CA;
	FRIEND_T fr;
	
	if(argc < 2) {
		printf("조건을 입력하세요\n");
		exit(1);
	}
// before
	printf(">>>>> before <<<<<\n");
	if((fd = open(DATA, O_RDONLY)) == -1) { // 파일을 읽기전용으로 열기
		perror("open failed\n");
		exit(1);
	}
//	printf("%ld\n", sizeof(fr));
	while(read(fd, &fr, sizeof(fr)) > 0) {
		printf("[%2d]fr.age = %2d\n", i, fr.age);
		i++;
	}
	close(fd);
//	printf("\n");
	
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
//		printf("command : %s\n", argv[i+1]); // 여기서는 이미 strtok로 짤린 듯
		printf("buf : %s\n", buf);
		printf("*buf : %d\n", *buf);
//		printf("atoi(*buf) : %d\n", atoi(*buf)); // 오류
		printf("atoi(buf) : %d\n", atoi(buf));
//		printf("===============\n");
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

// after
	printf("\n>>>>> after <<<<<\n");
	i = 0;
	if((fd = open(DATA, O_RDONLY)) == -1) {
		perror("open failed\n");
		exit(1);
	}
//	printf("%ld\n", sizeof(fr));
	while(read(fd, &fr, sizeof(fr)) > 0) {
		printf("[%2d]fr.age = %2d\n", i, fr.age);
		i++;
	}
	close(fd);
//	printf("\n");

	
}	
//void print_fr(char *str) {
//	int fd, i = 0;
//	
//	printf(">>>>> %s <<<<<\n", str);
//	
//	if((fd = open(DATA, O_RDONLY)) == -1) {
//		perror("open failed\n");
//		exit(1);
//	}
//	while(read(fd, &fr, sizeof(fr)) >  0) {
//		printf("[%02d] fr.age = %02d\n", i, fr.age);
//		i++;
//	}
//	close(fd);
//	printf("\n");
//}
