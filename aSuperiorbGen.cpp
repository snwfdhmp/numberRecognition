#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX 500

int main(int argc, char const *argv[])
{
	const int nbrModels = 500000, nbrIn = 2, nbrOut = 2;
	srand(time(NULL));
	unsigned int a,b,i;
	FILE* output = fopen("data.txt", "w+");

	fprintf(output, "%d %d %d\n\n", nbrModels, nbrIn, nbrOut);

	for(i=0; i<nbrModels;i++) {
		a=rand() % MAX;
		b=rand() % MAX;
		fprintf(output, "%d %d\n\n%d %d\n\n",a,b, (a>b), (a<=5));

	}
	printf("done.\n");

	return 0;
}