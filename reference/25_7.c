#include <stdio.h>

main(int argc, char *argv[])
{
    FILE *read_fp;
    char buffer[256];

    /* argv[1] ���μ����� �����ϰ� �б�� �������� ����. read_fp�� �������� ����Ŵ */
    if((read_fp = popen(argv[1], "r")) == NULL) {
       perror("popen failed");
       exit(1);
    }

    /* read_fp �������κ��� �����͸� �Է¹޾� ��� */
    while(fgets(buffer, sizeof(buffer), read_fp)) {
       fputs(buffer, stdout);
    }

    /* read_fp �������� ���� */
    pclose(read_fp);
    exit(0);
}