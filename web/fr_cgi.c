//apache2와 CGI를 이용한 친구 관리 프로그램

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#include "friend_1.h"

#define BUFSIZE 512
#define CNT 10
#define HEAD_LIST "<html lang=\"ko\"> <head> <meta charset=\"utf-8\"> <title>friend list page</title></head><body><h2>친구목록 %d 페이지</h2>"
#define HEAD_VIEW "<html lang=\"ko\"> <head> <meta charset=\"utf-8\"> <title>friend view page</title></head><body><h2>%d 상세페이지</h2>"
#define HEAD_SEARCH "<html lang=\"ko\"> <head> <meta charset=\"utf-8\"> <title>friend search page</title></head><body><h2>친구 검색 페이지</h2>"
#define SHOW_LIST "<a href=\"./fr.cgi?view%d\">%s</a><br>"
#define VIEW_FR "<h2>%s 상세 정보</h2><p><li>이름 : %s</li><li>나이 : %d</li><li>주소 :%s</li><li>성별 : %c</li><li>연락처 : %s</li></p></body></html>"
#define SEARCH_BAR "<form action=\"./fr.cgi\" accept-charset=\"utf-8\" method=\"get\">검색어:<input type=\"search\" name=\"search\"><input type=\"submit\"></form><p>"
#define SEARCH_LIST "<a href=\"./fr.cgi?view=%d\">%s</a><br>"
#define BUTTON_LIST "<br><button onClick=\"location.href='./fr.cgi?list=%d'\">이전</button><button onClick=\"location.href='./fr.cgi?list=%d'\">다음</button>"
#define NOT_FOUND "<h1>404 Not Found</h1>\n"
#define SERVER_ERR "<h1>500 Internal Server Error</h1>\n"

FRIEND_T fr;

int decode_url(char *url);
void list_fr(int page);
void view_fr(int index);
void search_fr(char *word);
void http_handler();

int main()
{
	printf("Content-type: text/html\n\n");
	http_handler();

	return 0;
}

int decode_url(char *url)
{
	char *t;

	for(t=url;*url;t++){
		if(*url=='%') {
			char *eptr=url+3;

			*t=strtol(url+1, &eptr, 16);
			url += 3;
		}
		else {
			*t = *(url++);
		}
	}
	*t=0l;

	return 0;
}

void list_fr(int page)
{
	int fd;

	if((open("Finfo.dat", O_RDONLY, 0644)) == -1) {
		printf("<br>DATA open failed");
		exit(1);
	}
	lseek(fd, (page-1)*CNT*sizeof(fr), SEEK_SET);
	printf(HEAD_LIST, page);
	printf(SEARCH_BAR);

	for(int i=0;i<CNT;i++) {
		if(read(fd, &fr, sizeof(fr)) <= 0) {
			break;
		}
		else {
			printf(SHOW_LIST, ((page-1)*10)+i, fr.name);
		}
	}
	

	if(page == 1) {
		printf(BUTTON_LIST, page, page+1);
	}
	else {
		printf(BUTTON_LIST, page-1, page+1);
	}

	printf("</p></body></html>");
	close(fd);
}

void view_fr(int index) {
	int fd;

	if((fd=open("Finfo.dat", O_RDONLY, 0644)) == -1) {
		perror("<br> DATA open failed");
		exit(1);
	}

	lseek(fd, index*sizeof(fr), SEEK_SET);
	read(fd, &fr, sizeof(fr));

	printf(HEAD_VIEW, index);
	printf(VIEW_FR, fr.name, fr.name, fr.age, fr.address, fr.gender, fr.phone);

	close(fd);
}

void search_fr(char *word)
{
	int fd, index=-1, cnt=0;
	char wbuf[BUFSIZE];

	strcpy(wbuf, word);
	decode_url(wbuf);

	if((fd = open("Finfo.dat", O_RDONLY, 0644)) == -1) {
		perror("open failed");
		exit(1);
	}

	printf(HEAD_SEARCH);
	printf(SEARCH_BAR);

	while(1) {
		if(read(fd, &fr, sizeof(fr)) <= 0) {
			break;
		}
		else {
			index++;
		}

		if(strstr(fr.name, wbuf)) {
			printf(SEARCH_LIST, index, fr.name);
			cnt++;
		}
	}

	if(cnt == 0) {
		printf("검색 결과 없음");
	}

	printf("</p></body></html>");
	close(fd);
}

void http_handler()
{
	char *local_url, *tmp;
	int num = 0;

	local_url = getenv("QUERY_STRING");

	if(strstr(local_url, "list")) {
		tmp=strtok(local_url, "=");
		tmp=strtok(NULL, " ");
		num = atoi(tmp);
		list_fr(num);
	}

	if(strstr(local_url, "view")) {
		tmp=strtok(local_url, "=");
		tmp=strtok(NULL, " ");
		num=atoi(tmp);
		view_fr(num);
	}

	if(strstr(local_url, "search")) {
		tmp=strtok(local_url, "=");
		tmp=strtok(NULL, " ");
		search_fr(tmp);
	}
}
