#include <stdio.h>

int countLetter(char*, char);

int main(){
	printf("Enter string and letter:\n");
	char text[255];
	char letter;
	scanf("%s  %c", &text, &letter);
	printf("%d", countLetter(text, letter));
	return 0;	
}

int countLetter(char *text, char letter){
	int i = 0;
	int charCounter = 0;
	while(text[i] != '\0'){
		if(text[i] == letter)
			++charCounter;
		++i;
	}
	
	return charCounter;	
}