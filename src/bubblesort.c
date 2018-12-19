#include "bubblesort.h"

void bubblesort(int* array, int size){
	int noswap = 1;
	while(noswap){
		noswap = 0;
		int i = 1;
		for(i; i < size; i++){
			if(array[i - 1] > array[i]){
				noswap = 1;
				swap(&array[i - 1],&array[i]);	
			}
		}
	}
}
