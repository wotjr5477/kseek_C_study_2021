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
	
	print_fr("BEFORE");
	
	if((fd = open(DATA, O_RDWR)) == -1) {
		perror("open failed\n");
		exit(1);
	}
	
	for(int i = 0; i < argc-1; i++) {
		buf = strtok(argv[i+1], "=");
		if(buf == NULL) {
			perror("No More Changes");
			exit(1); // argc check 대체 가능
		}
		CA = atoi(buf) * sizeof(fr);
		
		switch(buf[strlen(buf)-1]) {
			case 'n' :
				buf = strtok(NULL, "=");
				
				lseek(fd, CA, SEEK_SET);
				read(fd, &fr, sizeof(fr));
				strcpy(fr.name, buf);

				lseek(fd, CA, SEEK_SET);
				write(fd, &fr, sizeof(fr));
				continue;
			
			case 'a' :
				buf = strtok(NULL, "=");
				CV = atoi(buf);
				
				lseek(fd, CA, SEEK_SET);
				read(fd, &fr, sizeof(fr));
				fr.age = CV;

				lseek(fd, CA, SEEK_SET);
				write(fd, &fr, sizeof(fr));
				continue;
				
			case 'p' :
				buf = strtok(NULL, "=");
				
				lseek(fd, CA, SEEK_SET);
				read(fd, &fr, sizeof(fr));
				strcpy(fr.phone, buf);

				lseek(fd, CA, SEEK_SET);
				write(fd, &fr, sizeof(fr));
				continue;
							
			case 'A' :
				buf = strtok(NULL, "=");
				
				lseek(fd, CA, SEEK_SET);
				read(fd, &fr, sizeof(fr));
				strcpy(fr.address, buf);

				lseek(fd, CA, SEEK_SET);
				write(fd, &fr, sizeof(fr));
				continue;			

			case 'e' :
				buf = strtok(NULL, "=");
				
				lseek(fd, CA, SEEK_SET);
				read(fd, &fr, sizeof(fr));
				strcpy(fr.email, buf);

				lseek(fd, CA, SEEK_SET);
				write(fd, &fr, sizeof(fr));
				continue;
		}
	}
	close(fd);
	
	print_fr("AFTER");
	
	return(0);
}

void print_fr(char *str) {
	int fd, i = 0;
	FRIEND_T fr;
	
	printf(">>>>>>> %s <<<<<<<\n", str);
	
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
