#include <stdio.h>
#include <unistd.h>

main()
{
    while (1) {
       printf("Hello World\n");
       /* 1초 동안 정지 */
       sleep(1);
    }
}