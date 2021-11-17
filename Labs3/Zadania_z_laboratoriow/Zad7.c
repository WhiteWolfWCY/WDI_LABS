#include <stdio.h>
#include <stdlib.h>

int main(){
    int tab[10][10];

    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            tab[i][j]=i*j;
        }
    }

    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

return 0;
}