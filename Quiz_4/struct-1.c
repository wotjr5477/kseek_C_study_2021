#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct profile {
	int age;
	char name[10];
	char address[256];
	char gender[6];
	char phone_number[15];
} FRIEND_T;

int main(int argc, char *argv[]) {
	int fd1, fd2, rc, i;
	char age[3];
	char age2[3];
	
	FRIEND_T fr;
	
	if(argc < 2) { // 파일을 제대로 못 읽으면
		printf("파일을 입력하세요 \n");
		exit(1);
	}
	printf("%s\n", argv[1]);
	
	
	if((fd1 = open(argv[1], O_WRONLY | O_CREAT, 0666)) == -1) {
		perror("open failed\n");
		exit(1);
	}
	
	for(i = 0; i <2; i++) {
		// bzero(age, sizeof(age));
		// read(STDIN_FILENO, &age, sizeof(age));
		// printf("나이 : %\n", age);
		// write(fd1, age, sizeof(age));
		
		printf("fr.age는 %d\n", fr.age);
		
		bzero(&fr, sizeof(fr));
		fr.age = 10 + i;
		write(fd1, &fr, sizeof(fr));
	}
	close(fd1);
	
	if((fd2 = open(argv[1], O_RDONLY)) == -1) {
		perror("open failed\n");
		exit(1);
	}
	
	for(i = 0; i < 2; i++) {
		// read(fd2, age, sizeof(age2));
		read(fd2, &fr, sizeof(fr));
		printf("age : %d\n", fr.age);
	}
	close(fd2);
	exit(0);
}
