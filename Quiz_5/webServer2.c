#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <signal.h>
#include <fcntl.h>
#include "friend.h"

#define PORT 8002
#define MAXPENDDING 5
#define MAX 102400

char htmlheader[] = "HTTP/1.1 200 Ok\r\n" "Content-Type: text/html\r\n\r\n"
char jpgheader[] = "HTTP/1.1 200 Ok\r\n" "Content-Type: image/jpeg\r\n\r\n"
char pngheader[] = "HTTP/1.1 200 Ok\r\n" "Content-Type: image/png\r\n\r\n"


int readline(int fd, char *buf, int bufsize);

int friends(int sfd, char *option, int select)
{
	int frifd, opt;
	char buf[2048], content[1024];
	FRIEND_T fr;
	
	option = strtok(option, "=");
	option = strtok(NULL, "=");
	
	if((frifd = open("1109.dat"
