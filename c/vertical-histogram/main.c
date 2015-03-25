/*
Print histograms as shown below
	HORIZONTAL:
	a| .
	b| . .

	VERTICAL:
	
	----
	   .
	.  .
	----
	a  b
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{ const char *name; int count; }bin_t;
typedef bin_t *hist_t; // histogram is an array of bins

bin_t *makeBin(const char *name, const int count);

int main(){
	const int numBins = 2;
	hist_t sample = ( hist_t )malloc( sizeof(bin_t) * numBins );
	
	sample = makeBin("kdr",1);
	printf("%s: %d\n", sample[0].name, sample[0].count);

	free(sample);
	return 0;
}


bin_t *makeBin(const char *name, const int count){
	bin_t *newbin = (bin_t *)malloc(sizeof(bin_t));
	newbin->name = name;
	newbin->count = count;
	return newbin;
}