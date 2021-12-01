#include <stdio.h>
#include <stdlib.h>

int NWD(int a, int b){
    while(a!=b){
        if(a>b){
            a-=b;
        }else{
            b-=a;
        }
    }
    return a;
}

int main()
{
    int a=15;
    int b=6;

    printf("%d", NWD(a, b));
    return 0;
}
