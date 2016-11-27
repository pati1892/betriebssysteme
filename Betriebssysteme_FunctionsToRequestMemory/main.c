#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int calcMean(int *array, int length){
	int i = 0;
	int mean = 0;
	printf("%d\n", length);
	for(i; i<length; ++i){
		mean += array[i];
	}
	
	return mean/length;
}

int main(){
	int *pArray = NULL;
	pArray = (int *)malloc(sizeof(int)*3);
	printf("%p\n", pArray);
	int input = 0;
	int i = 0;
	scanf("%d", &input);
	while(input != -1){
		pArray[i] = input; 
		++i;
		pArray = (int *)realloc(pArray, (i+1)*sizeof(int));
		scanf("%d", &input);
		//printf("%p\n", pArray);
	}

	printf("%d\n", calcMean(pArray, i));
}

