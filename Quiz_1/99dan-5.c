#include <stdio.h>

int main(int argc, char *argv[]) {
//	int dan[argc];
//	printf("%s\n", argv[1]);
//	for(int j=0; j<=argc; j++) {
//		dan[j] = atoi(argv[j]);
//	}
//	for(int k=0; k<=argc; k++) {
//		printf("%d ", dan[k]);
//	}
	for(int i = 1; i <= 9; i++) {
	     for(int j = 1; j < argc; j++) {
	     	int dan = atoi(argv[j]);
//	     	printf("%d\n", dan);
	     	printf("%d * %d = %-3d", dan,  i,  dan*i);
//			printf("%d * %d = %-3d", atoi(argv[j]),  i, atoi(argv[j])*i);
			
	     }
     	 printf("\n"); 
 	} 
   	
//	for(int j=1; j<=argc; j++) {
//		printf("%-3d ", atoi(argv[j]));
//	}
//	printf("\n");
	
//	for(int i=1; i<=9; i++) {
//		printf("%d\n", i);
//		for(int j=1; j<=argc; j++) {
//			int dan = atoi(argv[j]);
//			printf("==== %d dan ====\t", atoi(argv[j]));
//		}
//		for(int j=1; j<=argc; j++) {
//			printf("%d\n", atoi(argv[j]));
//			printf("\n\t %d * %d = *d\t", atoi(argv[j]), i, atoi(argv[j])*i);
//		}
//	}
}
