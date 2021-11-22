#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

int main()
{
	int fd;
	
	if((fd = open("nodata", O_RDONLY)) == -1) { // open함수 호출에 실패하면 -1 반환
		printf("errno = %d\n", errno);
		exit(1);
	}
	exit(0);
}
