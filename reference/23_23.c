#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#define MAXARG 7

main()
{
    char buf[256];
    char *arg[MAXARG];
    char *s;
    char *save;
    int argv;
    /* ����, ��, �������� �̷���� ������ ���� */
    static const char delim[] = " \t\n";
    int pid, status;

    /* ���� �ݺ� */
    while(1) {
       /* ������Ʈ ��� */
       printf("myshell: ");
       gets(buf);
       argv = 0;
       /* ���ڿ����� delim�� �������� �ܾ �߶� */
       s = strtok_r(buf, delim, &save);
       while(s) {
          arg[argv++] = s;
          s = strtok_r(NULL, delim, &save);
       }
       /* �μ��� �� ������ �ǹ��ϴ� ���� �߰� */
       arg[argv] = (char *)0;

       /* ������Ʈ�� �Է� ���� ù ��° �ܾ ��quit���̸� while �� ��� */
       if (!strcmp(arg[0], "quit"))
           break;

       if ((pid=fork()) == -1)   /* fork ȣ�⿡ �����ϸ� */
          perror("fork failed");
       /* �θ� ���μ����� �ڽ� ���μ����� ����Ǳ⸦ ��ٸ� */
       else if (pid != 0) {
          pid = wait(&status);
       /* �ڽ� ���μ����� execvp�� �̿��Ͽ� arg[0] ���� */
       } else {
          execvp(arg[0], arg);
       }
    }
    exit(0);
}