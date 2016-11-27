#include <stdio.h>
#include <stdlib.h>

int length(char *c){
	int i = 0;
	while(c[i] != '\0'){
		++i;	
	}
	return i;
}

int checkIsbn(char *c){
	int returnValue = 1;
	int isbn = 0;
	int l = length(c);
	if(l == 10){
		int i = 0;
		for(i; i<l; ++i){
			isbn += c[i]*(i+1);		
		}
		returnValue = isbn%11;
	}
	return returnValue;
}



int main(int argc, char *argv[]){
	if(argc > 1)
		printf("%d\n", checkIsbn(argv[1]));
	else
		printf("No argument!\n");

}
