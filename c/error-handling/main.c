// demo: using errno, perror, strerror

#include <stdio.h>
#include <errno.h>

int main(){
	FILE *fd = fopen("non-file", "r");
	if( fd == NULL ){
		perror( "open()" );
		printf("strerror says, \"%s\"\n", strerror(errno));
	}
}