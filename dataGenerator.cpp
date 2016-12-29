#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	const int nbrModels = 5000, nbrIn = 1, nbrOut = 2;
	srand(time(NULL));
	int entier;
	unsigned int n,i;
	FILE* output = fopen("data.txt", "w+");

	fprintf(output, "%d %d %d\n\n", nbrModels, nbrIn, nbrOut);

	for(i=0; i<nbrModels;i++) {
		n=rand() % 11;
		fprintf(output, "%d\n\n%d %d\n\n",n, (n<5), (n>=5));

	}
	printf("done.\n");

	return 0;
}