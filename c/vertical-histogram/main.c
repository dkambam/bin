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
void fillBin(bin_t *bin, const char *name, const int count);
void printVerticalHist(hist_t hist, int numBins);
int maxBinCount(const hist_t hist, int numBins);
void printHeader(hist_t hist, int numBins, int width);

int main(){
	const int numBins = 5;
	hist_t sample = ( hist_t )malloc( sizeof(bin_t) * numBins );
	
	char binName[numBins][2];
	int count;
	for(int i=0; i<5; i++){
		sprintf(binName[i],"%c", 'a'+i);
		count = rand() % numBins;
		
		fillBin(&sample[i], binName[i], count);
		printf("%s: %d\n", binName[i], count);
	}

	printVerticalHist(sample, numBins);

	free(sample);
	return 0;
}


bin_t *makeBin(const char *name, const int count){
	bin_t *newbin = (bin_t *)malloc(sizeof(bin_t));
	fillBin(newbin, name, count);
	return newbin;
}

void fillBin(bin_t *bin, const char *name, const int count){
	bin->name = name;
	bin->count = count;
}

void printVerticalHist(hist_t hist, int numBins){
	static const int width = 2;
	int maxCount = maxBinCount(hist, numBins);
	for(int row=0; row<maxCount; row++){
		for(int col=0; col < numBins; col++){
			printf("%*s ", width, (row >= (maxCount - hist[col].count)) ? "." : " ");
		}
		printf("\n");
	}

	printHeader(hist, numBins, width);

}

int maxBinCount(const hist_t hist, int numBins){
	int max = 0; 
	for(int i=0; i<numBins; i++){
		max = hist[i].count > max ? hist[i].count : max;
	}
	return max;
}

void printHeader(hist_t hist, int numBins, int width){
	for(int col=0; col<numBins; col++){
		printf("%*s ", width, hist[col].name);
	}
	printf("\n");
}