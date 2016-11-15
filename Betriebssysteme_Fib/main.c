#include <stdio.h>
#include <stdlib.h>


long fib(long);
int main(int argc, char* argv[])
{

    int n = 0;
    if(2 == argc){
        n = atoi(argv[1]);
        printf("%d", fib(n));
    }
    else{
        printf("ERROR: No argument");
    }
    return 0;
}

long fib(long n){
    if(n == 0){
        return 0;
    }
    if(n==1||n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
