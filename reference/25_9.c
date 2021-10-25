#include <stdio.h>
#include <unistd.h>
#define SIZE 4

main()
{
    char *arg[3] = {"abc", "def", "ghi"};
    char buffer[SIZE];
    int pipes[2], i;

    /* ������ ����. pipes[0]�� �������κ��� �����͸� �о� ���� �� ����ϴ�
      ���� �ĺ��ڰ� �ǰ� pipes[1]�� �������� �����͸� �� �� ����ϴ� ���� �ĺ��ڰ� �� */
    if(pipe(pipes) == -1) {
       perror("pipe failed");
       exit(1);
    }

    for(i=0; i<3; i++) {
       /* �������� arg[i]�� ���� */
       write(pipes[1], arg[i], SIZE);
    }
    for(i=0; i<3; i++) {
       /* �������κ��� ������ �б� */
       read(pipes[0], buffer, SIZE);
       printf("%s\n", buffer);
    }

    exit(0);
}