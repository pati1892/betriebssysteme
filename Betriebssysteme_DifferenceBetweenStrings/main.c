#include <stdio.h>
#include <stdlib.h>

int length(char *c){
	int length = 0;
	while(c[length] != '\0'){
		++length;	
	}
	return length;
}

int countDiffs(char *text1, char *text2){
	int returnValue = -1;
	int i = 0;
	if(length(text1) == length(text2)){
		++returnValue;
		while(i<length(text1)){
			if(text1[i] - text2[i])
				++returnValue;
			++i;
		}
	}
	return returnValue;
		

}



int main(){
	printf("%d\n", countDiffs("Test", "Teste"));
	printf("%d\n", countDiffs("Test", "Test"));
	printf("%d\n", countDiffs("Hello", "HEllo"));
	printf("%d\n", countDiffs("World", "workd"));

}
