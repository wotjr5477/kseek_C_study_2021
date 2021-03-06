#include <stdio.h>
#include <unistd.h>

/* 환경 변수를 설정 */
char *envp[] = {"USER=jkim", "PATH=/tmp", (char *)0};

main()
{
    printf("Running ls with execle\n");
    /* 첫 번째 인수가 경로 이름이고 명령라인 인수들을 나열. 환경 변수 넘겨 줌 */
    execle("/bin/ls", "ls", (char *)0, envp);
    /* 이후 문장은 실행되지 않음 */
    printf("execle failed to run ls\n");
    exit(0);
}