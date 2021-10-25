#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

main()
{
    pid_t pid; 

    /* pid���� fork�� ��ȯ ���� ����Ǵµ�, ȣ�⿡ �������� ��쿡�� -1�� ���� */
    if ((pid=fork()) == -1)
       perror("fork failed");
    /* �� ������ ���� ���μ����� �θ� ���μ����ε�, �θ� ���μ�����
       pid �������� 0�� �ƴ� �ڽ� ���μ����� ���μ��� ID�� ����Ǳ� ���� */
    else if (pid != 0)
       printf("parent process\n");
    /* pid�� 0�̶�� �ǹ̰� �ǹǷ� ���� ���μ����� �ڽ� ���μ����ε�,
      �ڽ� ���μ����� pid �������� 0�� ����Ǳ� ���� */
    else
       printf("child process\n");
}