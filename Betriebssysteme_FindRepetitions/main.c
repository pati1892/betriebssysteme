#include <stdio.h>

int main(){
	char text[255];
	
}

char *findRepetitions(char *text){
	int size = length(text);
	char array = (char*)malloc(sizeof(text[0])*size));
	
	
}

int length(char *text){
	int size = 0;
	while(text[size] != '\0')
		++size;
	
	return size;	
}