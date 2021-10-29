#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	struct stat st;
	// argv[1] 파일에 대한 정보 st에 저장
	if(stat(argv[1], &st) == -1) {
		perror("stat failed");
		exit(1);
	} // st.st_size는 파일 크기

	printf("%ld byte\n", st.st_size);
}
