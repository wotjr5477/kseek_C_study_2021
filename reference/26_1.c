#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <signal.h>
#define SIZE 124

void signalHandler(int signo);

/* �޽��� �����ϴ� ������������ ù ��° ����� �޽��� �����̾�� �� */
struct {
    long type;
    char data[SIZE];
} msg_data={1, "Linux C Programming"};
int msqid;

main()
{
    /* 1234 Ű�� ���� �޽��� ť�� �����ϰ� �޽��� ť �ĺ����� �������� ��ȯ. 
      ���� 1234 Ű�� �޽��� ť�� ������ �޽��� ť�� �����Ͽ� �ĺ��ڸ� ��ȯ */
    if(msqid = msgget((key_t)1234, IPC_CREAT|0666) == -1) {
       perror("msgget failed");
       exit(1);
    }

    /* msg_data �޽����� msqid �޽��� ť�� ���� */
    if(msgsnd(msqid, &msg_data, strlen(msg_data.data), 0) == -1) {
       perror("msgsnd failed");
       exit(1);
    }

    /* SIGINT �ñ׳� ������ signalHandler �����ϵ��� ���� */
    signal(SIGINT, signalHandler);
    pause();
}

void signalHandler(int signo)
{
  /* msqid �޽��� ť ���� */
   if(msgctl(msqid, IPC_RMID, 0) == -1) {
      perror("msgctl failed");
      exit(1);
   }
   exit(0);
}