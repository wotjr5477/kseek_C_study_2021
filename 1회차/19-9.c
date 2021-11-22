#include <stdio.h>
#include <string.h> // strerror
#include <errno.h>

int main()
{
	FILE *fp;
	
	if((fp = fopen("nodata", "r")) == NULL) {
		fprintf(stderr, "ERROR: %s\n", strerror(errno));
		exit(1);
	}
	exit(0);
}
