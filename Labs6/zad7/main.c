#include <stdio.h>
#include <stdlib.h>

void choinka(int h){
    int n=1;
    while(n<=h){
        for(int i=0; i<n; i++){
            printf("*");
        }
        n++;
        printf("\n");
    }
}

int main()
{
    choinka(5);
    return 0;
}
