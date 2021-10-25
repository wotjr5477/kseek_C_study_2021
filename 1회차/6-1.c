#include <stdio.h>
#include <string.h> // strcpy 함수가 정의된 헤더파일

int main(void) {
	struct car { // struct car 데이터형 정의 이 구조의 멤버는 name, year, fuel
		char name[10];
		int year;
		double fuel;
	};
	struct car sonata; // struct car 데이터형 변수 선언

	strcpy(sonata.name, "SONATA");
	sonata.year = 2003;
	sonata.fuel = 77.7;

	printf("%s : %dyear %gfuel\n", sonata.name, sonata.year, sonata.fuel);
}

