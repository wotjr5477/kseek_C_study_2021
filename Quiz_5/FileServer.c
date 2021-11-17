#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/sendfile.h>

#define PORT 8001
#define MAXPENDDING 5
#define MAX 1024

int readline(int fd, char *buf, int bufsize);
int ls(char *list, int listCount);
void get(int clntSockfd, char *recvBuffer);

int main(void) {
	int servSockfd, clntSockfd;
	struct sockaddr_in servAddr, clntAddr;
	char recvBuffer[MAX], sendBuffer[MAX];
	int clntLen, recvLen;
	char list[MAX*100];
	int listCount = 0;
	char server_msg[MAX];
	
	if((servSockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
		perror("Sock failed\n");
		exit(1);
	}
	
	memset(&servAddr, 0, sizeof(servAddr));
	
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servAddr.sin_port = htons(PORT);
	
	if(bind(servSockfd, (struct sockaddr*)&servAddr, sizeof(servAddr)) == -1) {
		perror("bind failed\n");
		exit(1);
	}
	if((listen(servSockfd, MAXPENDDING) == -1) {
		perror("bind failed\n");
		exit(1);
	}
	
	printf("server Daemon Start\n");
	
	while(1) {
		clntLen = sizeof(clntAddr);
		
		if((clntSockfd = accept(servSockfd, (struct sockaddr*)&clntAddr, (unsigned int *)&clntLen)) == -1) {
			perror("accept failed\n");
			exit(1);
		}
		
		printf("[%2d] Client is in\n", clntSockfd);
		printf("====================\n");
		
		switch(fork()) {
			case -1:
				perror("fork failed");
				exit(1);
			case 0;
				close(servSockfd);
				while(1) {
					if((recvLen = recv(clntSockfd, recvBuffer, MAX, 0)) == -1) {
						perror("recv failed\n");
						exit(1);
					}
					if(rercvLen == 0)
						break;
					
					recvBuffer[recvLen] = '\0';
					
					printf("[%2d] ", clntSockfd);
					printf("Client >> %s", recvBuffer);
					// Verrry Imporrrtent
					strtok(recvBuffer, "\r");
					
					bzero(server_msg, sizeof(server_msg));
					if((strcmp(recvBuffer, "ls")) == 0) {
						listCount = ls(list, listCount);
						sprintf(server_msg, "ok, total count : %d\n", listCount);
						send(clntSockfd, server_msg, strlen(server_msg), MSG_NOSIGNAL);
						sendclntSockfd, list, strlen(list), MSG_NOSIGNAL);
					} else if((strstr(recvBuffer, "get")) != NULL) {
						printf("cmd > get\n");
						get(clntSockfd, recvBuffer);
					}
				}
				close(clntScokfd);
				exit(0);
