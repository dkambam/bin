/* 
DEMO: static external variables
(i.e) external to a function but scope limited to the file.

FILE: 2 of 2
*/

#include <stdio.h>
#include "file2.h"

void func2(void){
	extern int number;
	printf("func2: number is %d\n", number);
}