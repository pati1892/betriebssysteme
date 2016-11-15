#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("R:%d\n", overflow(5));
    printf("R:%d\n", overflow(6));
    printf("R:%d\n", overflow(12));
    printf("R:%d\n", overflow(7));
    printf("R:%d\n", overflow(2));
    return 0;
}

int overflow(int n){
    static int s=0;
    int div=1;
    s+=n;
    div=s;
    s%=10;
    printf("S=%d , ", s);
    return div/10;
}
