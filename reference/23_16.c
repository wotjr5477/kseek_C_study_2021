#include <stdio.h>
#include <unistd.h>

/* ȯ�� ������ ���� */
char *envp[] = {"USER=jkim", "PATH=/tmp", (char *)0};

main()
{
    printf("Running ls with execle\n");
    /* ù ��° �μ��� ��� �̸��̰� ��ɶ��� �μ����� ����. ȯ�� ���� �Ѱ� �� */
    execle("/bin/ls", "ls", (char *)0, envp);
    /* ���� ������ ������� ���� */
    printf("execle failed to run ls\n");
    exit(0);
}