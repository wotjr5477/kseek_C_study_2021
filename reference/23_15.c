#include <stdio.h>
#include <unistd.h>

main()
{
    printf("Running ls with execlp\n");
    /* ù ��° �μ��� ���� �̸��̰� ��ɶ��� �μ����� ����.
      ���α׷� ls�� PATH ȯ�� ������ ���� ������ ���丮���� ã��  */
    execlp("ls", "ls", (char *)0);
    /* ���� ������ ������� ���� */
    printf("execlp failed to run ls\n");
    exit(0);
}