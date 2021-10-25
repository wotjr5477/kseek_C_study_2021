#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <signal.h>
#define SIZE 124

struct {
    long type;
    char data[SIZE];
} msg_data;

main()
{
    int msqid;
    struct msqid_ds msg_stat;

    /* 1234 Ű�� �޽��� ť�� ������ �����ؼ� �ĺ��� ���� */
    if(msqid = msgget((key_t)1234, IPC_CREAT|0666) == -1) {
       perror("msgget failed");
       exit(1);
    }

    /* msqid �޽��� ť���� �޽��� �о� msg_data�� ���� */
    if(msgrcv(msqid, &msg_data, SIZE, 0, 0) == -1) {
       perror("msgrcv failed");
       exit(1);
    }

    printf("data read from message queue : %s\n", msg_data.data);

    /* msqid �޽��� ť ������ ��� msg_stat�� ���� */
    if(msgctl(msqid, IPC_STAT, &msg_stat) == -1) {
       perror("msgctl failed");
       exit(1);
    }
    /* msg_stat.msg_lspid ���μ������� SIGINT �ñ׳� ���� */
    kill(msg_stat.msg_lspid, SIGINT);

    exit(0);
}