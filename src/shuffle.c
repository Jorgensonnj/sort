#include "shuffle.h"

void shuffle(int* array, int size){
	srand(time(NULL));

	int i = size - 1;
	for(i; i > 0; i--){
		int j = rand() % (i + 1);
		swap(&array[i],&array[j]);
	}
}

void printArray(int* array, int size){
	int i = 0;
	printf("[");
	for(i; i < size - 1; i++){
		printf("%d,",array[i]);
	}
	printf("%d]\n", array[size - 1]);
}
