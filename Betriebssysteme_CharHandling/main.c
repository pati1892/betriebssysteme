#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[255];
    scanf("%s", &input);
    convert(input);
    printf("Result: %s\n", input);
}

void convert(char input[]){
    int offset = 'a'-'A';

    char buffer[255];
    int i=0;
    int a=0;
    int save = 0;
    unsigned int bool=0b1;
    while(input[i] != '\0'){
        if('!'==input[i]){
            if(!bool){
                i=save;
            }
            else{
                save=++i;
                if('\0'==input[i])
                    continue;
            }
            bool=~bool&0b1;
        }
        if(input[i]>='a')
            input[i]-= offset;
        else
            input[i]+=offset;
        ++i;
    }





   /* unsigned int bool=0b1;
    int i=0;
    while(input[i] != '\0'){
        if(input[i]=='!')
            bool=~bool&0b1;
        else if(input[i]>='a' && bool)
            input[i]-= offset;
        else if(bool)
            input[i]+=offset;
        ++i;
    }*/

}
