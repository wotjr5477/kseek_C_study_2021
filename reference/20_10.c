#include <stdio.h>
#include <stdlib.h>   /* environ ������ �����ϴ� ��� ���� */

/* environ�� ȯ�� ���� ���� ���� */
extern char **environ;

main()
{
   while(*environ)
      printf("%s\n", *environ++);
}