// Apache와 CGI를 활용한 친구 관리 프로그램

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
#include "friend.h"

#define BUFSIZE 1024
#define count 10
#define HEAD_LIST "<html lang=\"ko\"><head><meta charset=\"utf-8\"><title>friend list page</title></head><body><h2>친구목록 %d 페이지</h2>"
#define HEAD_VIEW "<html lang=\"ko\"><head><meta charset=\"utf-8\"><title>friend view page</title></head><body><h2>%d 상세 페이지</h2>"
#define HEAD_SEARCH "<html lang=\"ko\"><head><meta charset=\"utf-8\"><title>friend search page</title></head><body><h2>친구검색 페이지</h2>"
#define SHOW_FR_LIST "<a href=\"./web_fr_cgi.cgi?view=%d\">%s</a><br>"
#define VIEW_FR "<h2>%s 상세 정보</h2><p><li>이름 : %s</li><li>나이 : %d</li><li>주소 : %s</li><li>성별 : %s</li><li>연락처 : %s</li></p></body></html>"
#define SEARCH_BAR "<form action=\"./web_fr_cgi.cgi\" accept-charset=\"utf-8\" method=\"get\">검색어 : <input type=\"search\" name=\"search\"><input type=\"submit\"></form><p>"
#define SEARCH_FR_LIST "<a href=\"./web_fr_cgi.cgi?view=%d\">%s</a><br>"
#define BUTTON_LIST "<br><button onClick=\"location.href='./web_fr_cgi.cgi?list=%d'\">이전</button><button onClick=\"location.href='./web_fr_cgi.cgi?list%d'\">다음</button>"
#define NOT_FOUND_CONTENT "<h1>404 NOT FOUND</h1>\n"
#define SERVER_ERROR_CONTENT "<h1>500 Internal Server Error</h1>\n"

FRIEND_T fr;

int decode_url(char *url);
void list_fr(int page);
void view_fr(int index);
void search_fr(char *word);
void http_handler();

int main(int argc, char *argv[])
{
	printf("Content-type: text/html\n\n");
	http_handler();
	//printf("<html>hello</html>");
	return 0;
}

// url의 16진수 한글로 decoding하는 함수
int decode_url(char *url)
{
	char *t;
	
	for(t = url; *url; t++) {
		if(*url == '%') {
			char *eptr = url + 3;
			
			*t = strtol(url + 1, &eptr, 16);
			url += 3;
		}
		else *t = *(url++);
	}
	*t = 0l;
	
	return 0;
}

// list query 처리
void list_fr(int page)
{
	int fd;
	
	if((fd = open("New.dat", O_RDONLY, 0644)) == -1) {
		printf("<br>friend2.dat open failed");
		exit(1);
	}
	
	lseek(fd, (page - 1) * count * sizeof(fr), SEEK_SET);
	printf(HEAD_LIST, page);
	printf(SEARCH_BAR);
	
	for(int i = 0; i < count; i++) {
		if(read(fd, &fr, sizeof(fr)) <= 0) {
			printf("0");
			break;
		} else {
//			printf(SHOW_FR_LIST, ((page - 1) * 10) + i, fr.name);
			printf(SHOW_FR_LIST, ((page - 1) * 10) + i, "준석");
		}
	}
	
	if(page == 1) {
		printf(BUTTON_LIST, page, page + 1);
	} else {
		printf(BUTTON_LIST, page - 1, page + 1);
	}
	
	printf("</p></body></html>");
	close(fd);
}

//view query 처리
void view_fr(int index) {
	int fd;
	
	if((fd = open("New.dat", O_RDONLY, 0644)) == -1) {
		perror("open failed");
		exit(1);
	}
	
	lseek(fd, index * sizeof(fr), SEEK_SET);
	read(fd, &fr, sizeof(fr));
	
	printf(HEAD_VIEW, index);
	printf(VIEW_FR, fr.name, fr.name, fr.age, fr.address, fr.gender, fr.phone);
	
	close(fd);
}

// search query 처리
void search_fr(char *word)
{
	int fd, index =- 1, cnt = 0;
	char wbuf[BUFSIZE];
	
	strcpy(wbuf, word);
	decode_url(wbuf);
	
	if((fd = open("New.dat", O_RDONLY, 0644)) == -1) {
		perror("open failed");
		exit(1);
	}
	
	printf(HEAD_SEARCH);
	printf(SEARCH_BAR);
	
	while(1) {
		if(read(fd, &fr, sizeof(fr)) <= 0) {
			break;
		} else {
			index++;
		}
		if(strstr(fr.name, wbuf)) {
			printf(SEARCH_FR_LIST, index, fr.name);
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
	
	// list query처리
	if(strstr(local_url, "list")) {
		tmp = strtok(local_url, "=");
		tmp = strtok(NULL, " ");
		num = atoi(tmp);
		list_fr(num);
	}
	
	// view query 처리
	if(strstr(local_url, "view")) {
		tmp = strtok(local_url, "=");
		tmp = strtok(NULL, " ");
		num = atoi(tmp);
		view_fr(num);
	}
	
	// search query 처리
	if(strstr(local_url, "search")) {
		tmp = strtok(local_url, "=");
		tmp = strtok(NULL, " ");
		num = atoi(tmp);
	}
}
