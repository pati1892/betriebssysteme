#include <stdio.h>
#include <stdlib.h>


int length(char *c){
	int length = 0;
	while(c[length] != '\0'){
		++length;	
	}
	return length;
}

char *repeat(char *text){
	int l = length(text);
	int newLength = l*(l+1)/2;
	char *new = (char *)malloc(newLength+1);

	int b = 1;
	int i = 0;
	for(i; i<newLength;){
		int a = 0;	
		while(a < b){
			new[i]=text[a];
			++a;
			++i;
		}
		++b;
	}
	new[newLength+1] = '\0';
	return new;
}

int main(){
	printf("%s\n", repeat("Fachhochschule"));
}
