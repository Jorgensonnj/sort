#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "shuffle.h"
#include "bubblesort.h"

int main(int argc, char** args){
	clock_t start, end;
	double usedtime;

	//initialization of array
	int size = atoi(args[1]);
	int array[size];
	int i = 0;
	for(i; i < size; i++){
		array[i] = i;
	}

	//shuffle the array
	shuffle(array, size);
	//printf("Shuffled Array: \n");
	//printArray(array,size);
	//printf("\n");

	//bubble sorting the array
	start = clock();
	bubblesort(array,size);
	end = clock();

	//calculates the time the functions used
	usedtime = ((double) (end - start)) / CLOCKS_PER_SEC;
	//printArray(array,size);
	printf("Bubble sort time used: %lf secs.\n", usedtime);

	return 0;
}
