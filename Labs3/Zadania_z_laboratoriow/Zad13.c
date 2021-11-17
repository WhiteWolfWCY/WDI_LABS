#include <stdio.h>
#include <stdlib.h>

int main(){
    int tab[]={1,2,3,4,5,6};
    int *p=&tab;

    for(int i=0; i<6; i++){
        printf("%d\n", p[i]);
    }

    p[0]+=2;
    p[5]+=2;

    printf("\n");

    for(int i=0; i<6; i++){
        printf("%d\n", p[i]);
    }


return 0;
}