#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>


int* createFilledArray(int size){
	int i = 0;
	int *array = (int*)malloc(sizeof(int)*size);
	for(i; i<size; ++i){
		array[i] = i;		
	}
	return array;
	
}

struct myArray{
	int *array;
	int arraySize;
	int start;
	int end;	
}typedef myArray;

void *printArray(void *args){
	myArray *myarray= (myArray*)args;
	int end = myarray->end;
	int start = myarray->start;
	int* array = myarray->array;
	int i = start;
	printf("start: %d", start);
	for(i; i<end; ++i)
		printf("%d ", array[i]);
	
}



int main(){
	//pthread_t p1, p2, p3, p4;
	pthread_t threads[4];
	int size = 1000000;
	int *array = createFilledArray(size);
	int chunk = size/4;
	int i = 0;
	int start = 0;
	int end = chunk;
	for(i; i<4; ++i){
		myArray *myarray = (myArray*)malloc(sizeof(myArray));
		printf("Pointer : %d \n", myarray);
		myarray->array = array;
		myarray->arraySize = size;
		myarray->start = start;
		myarray->end = end;
		pthread_create(&threads[i], NULL, printArray, myarray);
		start = end;
		end += chunk;		
	}
		pthread_join (threads[0], NULL);
		pthread_join (threads[1], NULL);
		pthread_join (threads[2], NULL);
		pthread_join (threads[3], NULL);
	
	/*pthread_create(&p1, NULL, printArray(array, 0 , 25), array);
	pthread_create(&p2, NULL, printArray(array, 25 , 50), array);
	pthread_create(&p3, NULL, printArray(array, 50 , 75), array);
	pthread_create(&p4, NULL, printArray(array, 75 , 100), array);
	*/
	
}
