#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include "friend.h"

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
		fr.gender = '-';
		fr.phone = "000-0000-0000";
		fr.email = "abc@xyz.com";
		fr.address = "City";
		
		printf("[%2d] age: %d\tgender: %s  phone: %s   email: %s\t address: %s\n", i, fr.age, fr.gender, fr.phone, fr.email, fr.address);
		
		if((write(fd, &fr, sizeof(fr))) == -1) {
			perror("write failed\n");
			exit(1);
		}
	}
	close(fd);
	
	printf("\n>>>>> Read Test <<<<<\n");
	int i = 0;
	if((fd = open(argv[1], O_RDONLY)) == -1) {
		perror("read failed\n");
		exit(1);
	}
	printf("no.\tage\tgender\tphone\temail\taddress\n");
	while(read(fd, &fr, sizeof(fr)) > 0) {
		printf("[%2d] %d\t%s  %s   %s\t  %s\n", i, fr.age, fr.gender, fr.phone, fr.email, fr.address);
	}
	close(fd);
}
