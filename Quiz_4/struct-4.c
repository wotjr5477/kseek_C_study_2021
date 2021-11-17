#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

#include "friend.h"

#define DATA "New.dat"

void print_list(int fd, int page, FRIEND_T fr);
int readline(int fd, char *buf, int bufsize);
void edit(int fd, FRIEND_T fr);
void detailInfo(int fd, FRIEND_T fr, int num);

int check = 0; // ?

int main(int argc, char **argv) {
	FRIEND_T fr;
	char buf[1024];
	int fd;
	
	if((fd = open(DATA, O_RDWR)) == -1) {
		perror("open failed\n");
		exit(1);
	}
	
	while(1) {
		if(check == 0) {
			print_list(fd, 1, fr);
			check++;
		}
		printf("command > ");
		fflush(stdout);
		readline(0, buf, sizeof(buf));
		
		if(strcmp(buf, "quit") == 0) {
//			system("clear");
			printf("Good Bye~\n");
			break;
		} else if(strcmp(buf, "ls") == 0) {
			check = 0;
		} else if(strcmp(buf, "") == 0) {
			check++;
			print_list(fd, check, fr);
		} else if(strcmp(buf, "pre") == 0) {
			check--;
			print_list(fd, check, fr);
		} else if(strcmp(buf, "edit") == 0) {
			edit(fd, fr);
		} else if(isdigit(*buf)) {
			detailInfo(fd, fr, atoi(buf));
		}
	}
	close(fd);
	return 0;
}

void print_list(int fd, int page, FRIEND_T fr) {
	int re;
	
	system("clear");
	printf("[No.]\t[Name]\t[Age]\t[phone]\t\t[e-mail]\t\t[Address]\n");
	for(int i = 15*(page-1); i < 15*page; i++) {
		re = lseek(fd, i*sizeof(fr), SEEK_SET);
		if(re < 0) {
			printf("Not Found\n");
			break;
		}
		re = read(fd, &fr, sizeof(fr));
		if(re < sizeof(fr)) {
			bzero(&fr, sizeof(fr));
		}
		printf("[%3d]\t%s\t%2d\t%s\t%s\t%s\n", i, fr.name, fr.age, fr.phone, fr.email, fr.address);
	}
}

int readline(int fd, char *buf, int bufsize) {
	char c;
	int i, rc;
	
	bzero(buf, bufsize);
	
	for(i = 0;;i++) {
		rc = read(fd, &c, 1);
		if(rc < 0 || c == '\n')
			break;
		if(i < (bufsize-1))
			*(buf+i) = c;
	}
	return i;
}

void edit(int fd, FRIEND_T fr) {
	char str1[1024], *str2, *str3;
	int CV, CA, re;
	
	char arr2[100], arr3[1024];
	str2 = arr2;
	str3 = arr3;
	
	while(1) {
		printf("Edit > ");
		fflush(stdout);
		
		readline(0, str1, sizeof(str1));
		
		if(!strcmp(str1, "quit"))
			break;
		if(!(str2 = strtok(str1, "=")))
			break;
		if(str2 == NULL)
			break;
			
		CA = atoi(str2)*sizeof(fr);
		re = lseek(fd, CA, SEEK_SET);
		
		if(re < 0) {
			printf("Not Found\n");
			exit(1);
		}
		re = read(fd, &fr, sizeof(fr));
		if(re < sizeof(fr)) {
			bzero(&fr, sizeof(fr));
		}
		
		str3 = strtok(NULL, "=");
		
		switch(str2[strlen(str2)-1]) {
			case 'a' :
				CV = atoi(str3);
				fr.age = CV;
				break;
			case 'n' :
				strcpy(fr.name, str3);
				break;
			case 'p' :
				strcpy(fr.phone, str3);
				break;
			case 'e' :
				strcpy(fr.email, str3);
				break;
			case 'A' :
				strcpy(fr.address, str3);
				break;
			default :
				printf("Not Found\n");
				break;
		}
		lseek(fd, CA, SEEK_SET);
		write(fd, &fr, sizeof(fr));
		print_list(fd, check, fr);
	}
}

void detailInfo(int fd, FRIEND_T fr, int num) {
	int re;
	int address;
	
	address = num * sizeof(fr);
	re = lseek(fd, address, SEEK_SET);
	if(re < 0) {
		printf("Not Found\n");
		exit(1);
	}
	re = read(fd, &fr, sizeof(fr));
	if(re < sizeof(fr)) {
		bzero(&fr, sizeof(fr));
	}
	printf("\tNAME\t: %s\n\tAge\t: %d\n\tPhone\t: \%s\n\te-mail\t: %s\n\tAddress\t: %s\n", fr.name, fr.age, fr.phone, fr.email, fr.address);
}
