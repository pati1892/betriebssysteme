#include <stdio.h>
#include <stdlib.h>

int length(char *c){
	int length = 0;
	while(c[length] != '\0'){
		++length;	
	}
	return length;
	
}
void rotateLeft(char *text){
	int l = length(text);	
	printf("%d\n", l);
	char buffer;
	int i = 0;
	buffer = text[i];
	for(i; i<l-1; ++i){
	

		if(i+1 >= l-1){
			text[i] = buffer;
			
		}
		else{
			text[i] = text[i+1];
		}		
	}

	printf("new text: %s\n", text);
}


int main(){	
	int maxSize = 20;
	char *c = (char *)malloc(sizeof(char)*20);
	fgets(c, maxSize, stdin);
	
	rotateLeft(c);

}
