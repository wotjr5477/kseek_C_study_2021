#include <fcntl.h>

int main(void) {
	int fd;

	// jban 파일을 읽기 전용으로 열기
	// 호출 실패시 -1 return, if문 = 참
	if ((fd = open("jkim", O_RDONLY)) == -1) {
		perror("open failed");
		exit(1);
	}

	// fd 파일 닫기
	close(fd);
	exit(0);
}
