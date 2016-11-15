#include <stdio.h>
#include <stdlib.h>

void printMulTable();

int main()
{
    printMulTable();
    return 0;
}

void printMulTable(){

    int i=1;
    for(i; i<10; ++i){
        int a=1;
        for(a; a<10; ++a){
            printf("%d%s%d%s%d%c", i, " * ", a, " = ", a*i, '\n');
        }
    }


}
