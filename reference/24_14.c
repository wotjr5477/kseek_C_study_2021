#include <stdio.h>
#include <signal.h>
#include <unistd.h>

main() 
{ 
    int count=0;

    while(1) {
       printf("Hello World\n");
       count++;
       if(count == 3) {   /* count�� 3�� �Ǹ� */
          /* �ڱ� �ڽſ��� SIGINT �ñ׳� ���� */
          raise(SIGINT);
       }
       sleep(2);   /* 2�� ���� ���� */
    }
}