#include <stdio.h>
#include <stdlib.h>

void func1(void);
void func2(void);
void func3(void);

main()
{
    /* exit �Լ� ȣ�� �� ����� �Լ��� func1, func2, func3 ������ ��� */
    atexit(func1);
    atexit(func2);
    atexit(func3);

    exit(0);
}

void func1(void)
{
    printf("run function1\n");
}

void func2(void)
{
    printf("run function2\n");
}

void func3(void)
{
    printf("run function3\n");
}