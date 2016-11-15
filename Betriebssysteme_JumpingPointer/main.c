#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[]={2, 3, -1, 2, -1};
    int sizeA=(sizeof(A)/sizeof(A[0]));
    int visited[255]={0};
    int jumpCount=0;
    int k=0;
    while(k<sizeA){
        if(!visited[k]){
            ++jumpCount;
            visited[k]=1;
            k+=A[k];
        }
        else{
            jumpCount=-1;
            break;
        }

    }
    printf("Result: %d", jumpCount);
    return 0;
}
