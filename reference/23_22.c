#include <stdio.h>
#include <unistd.h>

/* ȯ�� ���� ������ ���� */
char *envp[] = {"USER=jkim", "PATH=/tmp", (char *)0};

main()
{
    char *arg[] = {"23_21", (char *)0};  /* 23_21�� ���Ӱ� ����� ���α׷� �̸� */
    printf("Running %s with execve\n", arg[0]);
    /* 23_21�� envp�� ������ ȯ�� ������ ���� */
    execve("./23_21", arg, envp);
    printf("execve failed to run %s\n", arg[0]);
    exit(0);
}