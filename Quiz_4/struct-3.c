#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include "friend.h"

#define DATA "New.dat"

int main(int argc, char *argv[]) {
	FRIEND_T fr;
	int fd;
	
	if(argc < 2) {
		printf("조건을 입력하세요\n");
		exit(1);
	}
// WRITE
	if((fd = open(argv[1], O_WRONLY | O_CREAT , 0644)) == -1) {
		perror("open failed\n");
		exit(1);
	}
	
//	printf(">>>>> Write Test <<<<<\n");
	for(int i = 0; i < 10; i++) {
		// init fr
		bzero(&fr, sizeof(fr));
		fr.age = i + 10;
		fr.gender = "M/F";
		fr.phone = "000-0000-0000";
		fr.email = "abc@xyz.com-";
		fr.address = "City";
		
		printf("Friend_%d's age : %d\n", i+1, fr.age);
		
		if((write(fd, &fr, sizeof(fr))) == -1) {
			perror("write failed\n");
			exit(1);
		}
	}
