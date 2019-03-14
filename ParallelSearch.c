#include <omp.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* #include <stdlib.h> */
int main (int argc, char *argv[]) {
	int bool = 0;
	int sizeOfArray = 100000000;
	int valueToFind = 99999999;
	int * dataset  = malloc(sizeOfArray * 4 );
	for (int i = 0; i< sizeOfArray; i++)
	{
		dataset[i] = i;
	}
	clock_t begin = clock();
	#pragma omp parallel for
	for (int n = 0 ; n< sizeOfArray; n++)
	{
		if (dataset[n] == valueToFind) {
			bool = 1;
			n = sizeOfArray;
		}
	}
	clock_t end = clock();
	 double timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;

	if (bool == 1) {
		printf("Its here \n");
	}
	else {
		printf("Can't find it, soz \n");
	}
	printf("Time taken = %f", timeSpent);
	free(dataset);

	return 0;
}
