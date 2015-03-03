/* 
DEMO: static external variables
(i.e) external to a function but scope limited to the file.

FILE: 1 of 2
*/

#include <stdio.h>
#include "file2.h"


static int number = 113; // linker error as expected: undefined symbol
// int number = 113; // no linker error

void func(void);

int main(){

	func();
	func2();

	return 0;
}


void func(void){
	extern int number;
	printf("func: number is: %d\n", number);
}
