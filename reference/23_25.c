#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(int argc, char *argv[])
{
    char *str;
    int i=1;
    printf("Running %s with system\n", argv[1]);
    /* ��ɶ����� �μ����� �����ؼ� str�� ���� */
    while(argc > i) {
       strcat(str, argv[i++]);
       strcat(str, " ");
    }
    /* sysstem�� �̿��� str�� ����� ��ɾ� ���� */
    system(str);
    printf("Done\n");
    exit(0);
}