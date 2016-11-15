#include <stdio.h>
#include <stdlib.h>

long fakIter(int);
long fakRec(int);
int main()
{
    printf("%d%c", fakIter(16), '\n');
    printf("%d", fakRec(16));
    return 0;
}

long fakIter(int n){
    int result = 1;
    for(n; n>0; --n){
        result *= n;
    }
    return result;
}

long fakRec(int n){
    if(0==n)
        return 1;

    return n*fakRec(n-1);
}
