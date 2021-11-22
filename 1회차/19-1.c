#include <stdio.h>
#include <errno.h> // errno
#include <stdlib.h> // exit

int main()
{
	FILE *fp;
	if ((fp = fopen("nodata", "r")) == NULL) {
		printf("errno = %d\n", errno); //오류 발생 >> errno에 번호 저장
		exit(1);
	}
	exit(0);
}
