#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h> 

main() 
{ 
    int status; 

    /* �θ� ���μ����� */
    if (fork()) { 
       /* �ڽ� ���μ����� ����Ǳ⸦ ��ٸ� */
       wait(&status); 
       printf("child process terminated with code %x\n", status); 
    /* �ڽ� ���μ����� */
    } else { 
       /* 3�� �Ŀ� SIGALRM �ñ׳��� �ڽſ��� ���� */
       alarm(3); 
       printf("looping forever...\n"); 
       while(1) 
          ; 
    } 
}