#include <omp.h>
#include <stdio.h>
#include <time.h>
/* #include <stdlib.h> */
int main (int argc, char *argv[]) {
	int x = 5;
	clock_t begin = clock();
	#pragma omp parallel for
	for (int i = 0; i < 20; i++)
	{
		x++;
	}
	clock_t end = clock();
	double timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Time taken = %d", timeSpent);
	printf("X is %d", x);
	return 0;
}
