#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include "friend.h"

#define DATA "New.dat"

int main(int argc, char *argv[]) {
	int fd, i, age, number, address;
	char *ptr, *ptr1, *ptr2;
	FRIEND_T fr;
	
	if(argc < 2) {
		printf("조건을 입력하세요\n");
		exit(1);
	}
	
	if((fd = open(DATA, O_RDWR)) == -1) {
		perror("open failed\n");
		exit(1);
	}
	
	// print
	for(i = 1; i < argc; i++) {
		ptr1 = malloc(sizeof(argv[i]));
		strcpy(ptr1, argv[i]);
		
		ptr = strchr(ptr1, '=');
		*ptr = 0;
		number = atoi(ptr-1);
		address = number * sizeof(fr);
		age = atoi(ptr + 1);
		
		printf("number: %d address: %d age: %d\n", number, address, age);
		
		lseek(fd, address, SEEK_SET);
		read(fd, &fr, sizeof(fr));
		
		fr.age = age;
		
		lseek(fd, address, SEEK_SET);
		write(fd, &fr, sizeof(fr));
	}
	
	close(fd);
	
	if ((fd = open(DATA, O_RDWR)) == -1) {
		perror("open failed\n");
		exit(1);
	}
	
	for(i = 0; i < 10; i++) {
		if((fd = open(DATA, O_RDWR)) == -1) {
			perror("open failed\n");
			exit(1);
		}
	printf("%d age : %d\n", i, fr.age);
	}	
}
