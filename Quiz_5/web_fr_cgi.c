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

#define BUFSIZE 512
#define count 10
#define HEAD_LIST "<html lang=\"ko\"><head><meta charset=\"utf-8\"><title>friend list page</title></head><body><h2>친구목록 %d 페이지</h2>"
#define HEAD_VIEW "<html lang=\"ko\"><head><meta charset=\"utf-8\"><title>friend view page</title></head><body><h2>%d 상세 페이지</h2>"
