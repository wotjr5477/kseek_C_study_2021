#include <stdio.h>
#include <stdlib.h>

main()
{
    printf("Running ls with system\n");
    /* system�� �̿��ؼ� ls ��ɾ� ���� */
    system("ls");
    printf("Done\n");
    exit(0);
}