#include <stdio.h>
#include <unistd.h>
#define MAX 100

main() 
{ 
    char buffer[MAX];
    int n;

    alarm(10);   /* 10�� �Ŀ� SIGALRM �ñ׳��� �ڽſ��� ���� */
    n=read(0, buffer, MAX);
    /* SIGALRM �ñ׳��� �ޱ� ���� �����ϸ� SIGALRM �ñ׳� ��û�� ��� */
    alarm(0);
    write(1, buffer, n);
    exit(0);
}