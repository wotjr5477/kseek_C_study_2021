#include <stdio.h>
#include <unistd.h>

main()
{
    char *arg[] = {"ls", (char *)0};
    printf("Running ls with execvp\n");
    /* ù ��° �μ��� ���� �̸��̰� ��ɶ��� �μ��� �μ����� �迭.
      ���α׷� ls�� PATH ȯ�� ������ ���� ������ ���丮���� ã�� */
    execvp("ls", arg);
    printf("execvp failed to run ls\n");
    exit(0);
}