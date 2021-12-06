#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "friend.h" // 외부 헤더에서 정의

/*
typedef struct profile {
	int age;
	char name[128];
	char address[256];
	char gender;
	char phone[16];
	char email[64];
} FRIEND_T;
*/

int main(int argc, char **argv) { // 파일명을 argv[1]로 받음
	FRIEND_T fr;
	int fd, idx;
	
	// argc check
	if(argc < 2) {
		printf("argc failed\n");
		exit(1);
	}
	
	// READ FILE FOR WRITE
	if((fd = open(argv[1], O_WRONLY | O_TRUNC | O_CREAT , 0644)) == -1) {
		perror("open failed\n");
		exit(1);
	} // O_ : WRONLY, TRUNC(파일의 길이를 0으로 > 파일 내용 삭제), CREAT(없으면 새로 만듬)
	
	// WRITE
	printf(">>>>> Write Test <<<<<\n");
	for(int i = 0; i < 10; i++) {
		// init fr
		bzero(&fr, sizeof(fr));
		idx = i + 1;
		
		fr.age = i + 20;
		printf("Friend_%d's age : %d\n", idx, fr.age);
		
		if((write(fd, &fr, sizeof(fr))) == -1) {
			perror("write failed\n");
			exit(1);
		}
	}
//	printf("age2 : %d\n", fr.age);
	close(fd);
	
	// READ TEST
	printf(">>>>> Read Test <<<<<\n");
//	fd = 0;
	if((fd = open(argv[1], O_RDONLY)) == -1) {
		perror("read failed\n");
		exit(1);
	}
	while(read(fd, &fr, sizeof(fr)) > 0) {
		printf("AGE : %d\n", fr.age);
	}
	close(fd);
}
