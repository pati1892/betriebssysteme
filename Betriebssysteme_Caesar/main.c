#include <stdio.h>
#include <stdlib.h>

int main()
{
    int shift = 3;
    char input[255];
    fgets(input, 255, stdin);

    int i = 0;
    while(input[i] != '\0'){
        input[i] += shift;
        if(input[i] > 'z' || (input[i] > 'Z' && input[i] < 'a')){
            input[i] -= 26;
        }
        ++i;
    }

    printf("%s", input);
    return 0;

}
