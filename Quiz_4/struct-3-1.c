#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

#include "friend.h"

#define DATA "New.dat"

void print_fr(char *str);

int main(int argc, char **argv) {
	FRIEND_T fr;
	int fd, CV, CA;
	char *buf;
	
	if(argc < 2) {
		printf("조건을 입력하세요\n");
		exit(1);
	}
	
	print_fr("BEFORE");
	
	printf("0\n");
	if((fd = open(DATA, O_RDWR)) == -1) {
		perror("open failed\n");
		exit(1);
	}
	printf("0\n");
	
	for(int i = 0; i < argc-1; i++) {
		buf = strtok(argv[i+1], "=");
		if(buf == NULL) {
			perror("No More Changes");
			continue;
		}
		CA = atoi(buf) * sizeof(fr);	
		printf("0\n");
		
		switch(buf[strlen(buf)-1]) {
			case 'n' :
				buf = strtok(NULL, "=");
				
				lseek(fd, CA, SEEK_SET);
				read(fd, &fr, sizeof(fr));
				strcpy(fr.name, buf);

				lseek(fd, CA, SEEK_SET);
				write(fd, &fr, sizeof(fr));
			
			case 'a' :
				buf = strtok(NULL, "=");
				CV = atoi(buf);
				
				lseek(fd, CA, SEEK_SET);
				read(fd, &fr, sizeof(fr));
				fr.age = CV;

				lseek(fd, CA, SEEK_SET);
				write(fd, &fr, sizeof(fr));
			
			case 'p' :
				buf = strtok(NULL, "=");
				
				lseek(fd, CA, SEEK_SET);
				read(fd, &fr, sizeof(fr));
				strcpy(fr.phone, buf);

				lseek(fd, CA, SEEK_SET);
				write(fd, &fr, sizeof(fr));
			
			case 'A' :
				buf = strtok(NULL, "=");
				
				lseek(fd, CA, SEEK_SET);
				read(fd, &fr, sizeof(fr));
				strcpy(fr.address, buf);

				lseek(fd, CA, SEEK_SET);
				write(fd, &fr, sizeof(fr));
			
			case 'e' :
				buf = strtok(NULL, "=");
				
				lseek(fd, CA, SEEK_SET);
				read(fd, &fr, sizeof(fr));
				strcpy(fr.email, buf);

				lseek(fd, CA, SEEK_SET);
				write(fd, &fr, sizeof(fr));
		}
		printf("0\n");
	}
	close(fd);
	
	print_fr("AFTER");
	
	return(0);
}

void print_fr(char *str) {
	int fd, i = 0;
	FRIEND_T fr;
	
	printf("\n>>>>>>> %s <<<<<<<\n", str);
	
	if((fd = open(DATA, O_RDONLY)) == -1) {
		perror("open failed\n");
		exit(1);
	}
	while(read(fd, &fr, sizeof(fr)) >  0) {
		printf("[%02d] fr.name = %s\n", i, fr.name);
		printf("[%02d] fr.age = %02d\n", i, fr.age);
		printf("[%02d] fr.phone = %s\n", i, fr.phone);
		printf("[%02d] fr.address = %s\n", i, fr.address);
		printf("[%02d] fr.email = %s\n", i, fr.email);
		printf("--------------------\n");
		i++;
	}
	close(fd);
	printf("\n");
}
