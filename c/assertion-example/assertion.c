/*
A simple demo of using assertions
*/

#include <stdio.h>
#include <assert.h>

typedef unsigned int num_t;
num_t div(num_t a, num_t b);

int main(){
	printf("res: %u\n",div(10U,0U));
	return 0;
}

num_t div(num_t a, num_t b){
	assert( b!=0 );
	return a/b;
}