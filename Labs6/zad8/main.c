#include <stdio.h>
#include <stdlib.h>

void choinkaRek(int h){
    if(h<0) return;
    choinkaRek(h-1);
    for(int i=0;i<h;i++){
            printf("*");
    }
    printf("\n");
}

int main()
{
    choinkaRek(5);
    return 0;
}
