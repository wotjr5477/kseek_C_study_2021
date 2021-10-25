#include <stdio.h>
#include <unistd.h>

main(int argc, char *argv[])
{
    int i;
    char *arg[argc];
    printf("Running %s with execvp\n", argv[1]);
    /* ��ɶ��ο��� �޾Ƶ��� �μ����� arg�� �����ϴ� �κ����� 
      ù ��° �μ��� a.out�� ���� */
    for (i=0; i<(argc-1); i++) {
       arg[i]= argv[i+1];
    }
    /* �μ��� �� ������ �ǹ��ϴ� ���� �߰� */
    arg[i] = (char *)0;
    /* execvp�� �̿��ؼ� 'ps -au' ��ɾ ����ǵ��� �ϴ� �κ�����, 
      argv[1]���� 'ps'��, arg[0]���� 'ps', arg[1]���� '-au', �׸��� arg[2]���� 0�� ���� */
    execvp(argv[1], arg);
    printf("execvp failed to run %s\n", argv[1]);
    exit(0);
}