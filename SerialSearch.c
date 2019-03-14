#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
   int bool = 0;
   int sizeOfArray;
   int valueToFind;
//   printf("Enter size of array \n");
//   scanf("%d", &sizeOfArray);
   sizeOfArray = 100000000;
//   printf("What number do you want to look for? \n");
//   scanf("%d", &valueToFind);
   valueToFind = 99999999;
  // int dataset[sizeOfArray];
   int * dataset  = malloc(sizeOfArray * 4 );
   for (int i = 0; i< sizeOfArray; i++)
   {
     dataset[i] = i;
   }
   clock_t begin = clock();
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
