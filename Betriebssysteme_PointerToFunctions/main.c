#include <stdio.h>
#include <stdlib.h>

void printString(char *c){
	printf("%s\n", c);
}

void printStringLength(char *c){
	int i = 0;
	while(c[i] != '\0'){
		++i;
	}
	printf("length: %d\n", i);
}

int testPattern(char *source, void (*fun)(char *)){
	fun(source);

}

int main(){
	char c[255] = "123456789";
	printString(c);
	printStringLength(c);
	testPattern(c, &printString);
}
