#include <stdio.h>
#include <stdlib.h>

/* envp�� ȯ�� ���� ���� ���� */
main(int argc, char *argv[], char *envp[])
{
   while(*envp)
      printf("%s\n", *envp++);
}