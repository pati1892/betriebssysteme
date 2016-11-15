#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int lowerCaseStart = 'a';
    const int upperCaseStart = 'A';
    const int lowerCaseEnd = 'z';
    const int upperCaseEnd = 'Z';

    int shift = 3;
    char input[255];
    fgets(input, 255, stdin);

    int i = 0;
    while(input[i] != '\0'){
        input[i] += shift;
        if(input[i] > lowerCaseEnd || input[i] > upperCaseEnd && input[i] < lowerCaseStart){
            input[i] -= 26;
        }
        ++i;
    }

    printf("%s", input);
}
