#include <stdio.h>

main(int argc, char *argv[])
{
    FILE *write_fp;
    char buffer[256];

    /* argv[1] ���μ����� �����ϰ� ����� �������� ���� */
    if((write_fp = popen(argv[1], "w")) == NULL) {
       perror("popen failed");
       exit(1);
    }

    sprintf(buffer, "Linux C Programming\n");
    /* buffer�� ����� �����͸� �������� ��. 
       �������� �� �����ʹ� argv[1] ��ɾ��� �Է����� ���� */
    fprintf(write_fp, buffer);
 
    /* write_fp �������� ���� */
    pclose(write_fp);
    exit(0);
}