#include <stdio.h>
#include <unistd.h>

/* ȯ�� ������ ���� */
char *envp[] = {"USER=jkim", "PATH=/tmp", (char *)0};

main()
{
    char *arg[] = {"ls", (char *)0};
    printf("Running ls with execve\n");
    /* ù ��° �μ��� ��� �̸��̰� ��ɶ��� �μ��� �μ����� �迭. ȯ�� ���� �Ѱ� �� */
    execve("/bin/ls", arg, envp);
    printf("execve failed to run ls\n");
    exit(0);
}