#include <stdio.h>
#include <unistd.h>

main()
{
    /* �μ� ����Ʈ�� �������� �ϴ� ���ڿ� �迭 */
    char *arg[] = {"ls", (char *)0};
    printf("Running ls with execv\n");
    /* ù ��° �μ��� ��� �̸��̰� ��ɶ��� �μ��� �μ����� �迭 */
    execv("/bin/ls", arg);
    printf("execv failed to run ls\n");
    exit(0);
}