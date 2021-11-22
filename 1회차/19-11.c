#include <stdio.h>

int main()
{
	FILE *fp;
	
	if((fp = fopen("nodata", "r")) == NULL) {
		perror("ERROR");
		exit(1);
	}
	exit(0);
}
