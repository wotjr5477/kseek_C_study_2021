#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

main()
{
    /* fork ȣ���ϱ� ���̹Ƿ� ����(�θ�) ���μ��������� �ѹ� ���� */
    printf("one\n");
    /* fork ȣ�⿡ ���� �ڽ� ���μ��� ���� */
    if (fork() == -1)  /* fork�� �����ϸ� */
       perror("fork failed");
    else  /* fork�� �����ϸ� */
       printf("two\n");   /* �θ� ���μ����� �ڽ� ���μ��� ������ ���� */
}