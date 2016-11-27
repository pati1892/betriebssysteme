#include <stdio.h>
#include <stdlib.h>


int isPermutation(char *a, char *b){
	int ia = 0;
	int visited[255] = {0};
 	while(a[ia] != '\0'){
		int ib = 0;
		
		while(b[ib] != '\0'){
		    if(visited[ib] == -1){
		    	++ib;
		    } 
			if(b[ib] == a[ia]){
				visited[ib] = -1;
				break;
			}
			++ib;
		}
		if(visited[ib] != -1) return 0;
		++ia;
	
	}
	return 1;
}

int main(){

	printf("%d\n", isPermutation("hello", "lehol"));
	printf("%d\n", isPermutation("hello", "lehho"));
	printf("%d\n", isPermutation("patrick", "itrkcpa"));
	printf("%d\n", isPermutation("patrick", "itrkcba"));
}
