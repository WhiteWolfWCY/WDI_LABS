#include <stdio.h>
#include <stdlib.h>

int main(){
    int tab[10]={0,1};

    for(int i=2; i<10; i++){
        tab[i]=tab[i-1]+tab[i-2];
    }

    for(int i=0; i<10; i++){
        printf("%d", tab[i]);
    }
return 0;
}