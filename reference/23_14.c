#include <stdio.h>
#include <unistd.h>

main()
{
    printf("Running ls with execl\n");
    /* ù ��° �μ��� ��� �̸��̰� ��ɶ��� �μ����� ����.
      (char *)0�� �μ��� �� �̻� ������ �ǹ� */
    execl("/bin/ls", "ls", (char *)0);
    /* ���� ������ ������� ���� */
    printf("execl failed to run ls\n");
    exit(0);
}