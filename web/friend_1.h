#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct {
        int age;
        char name[20];
        char address[256];
        char gender;
        char phone[16];
        char email[64];
        int num;
	int flag;
} FRIEND_T;
