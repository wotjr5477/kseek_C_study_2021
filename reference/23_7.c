#include <stdio.h>
#include <stdlib.h>

void func(void);

main(int argc, char *argv[])
{
    atexit(func);
    /* atoi�� ���� ������ ���ڿ��� ������ ��ȯ�ϴ� �Լ��� argv[1]�� "1"�̸� 1�� ��ȯ.
      argv[1]�� "0"�� �Ǿ�� if ������ ���� �� */
    if(!atoi(argv[1]))
      /* ������������ ���μ����� �����ϴµ� atexit�� ���� ��ϵ� �Լ��� ������� ���� */
       abort();
    exit(0); /* ���������� ���μ����� �����ϴµ� atexit�� ���� ��ϵ� �Լ��� ���� �� */
}

void func(void)
{
    printf("run function\n");
}