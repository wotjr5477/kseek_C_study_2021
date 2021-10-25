#include <stdio.h>
#include <unistd.h>

/* 환경 변수를 설정 */
char *envp[] = {"USER=jkim", "PATH=/tmp", (char *)0};

main()
{
    char *arg[] = {"ls", (char *)0};
    printf("Running ls with execve\n");
    /* 첫 번째 인수가 경로 이름이고 명령라인 인수는 인수들의 배열. 환경 변수 넘겨 줌 */
    execve("/bin/ls", arg, envp);
    printf("execve failed to run ls\n");
    exit(0);
}