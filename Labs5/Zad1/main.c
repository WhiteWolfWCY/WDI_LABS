#include <stdio.h>
#include <stdlib.h>

int chooseValues(int tab[], int size){

    int suma=0;

    for(int i=0; i<size; i++){
        if(tab[i]<6 || tab[i]%2==0){
            suma+=tab[i];
        }
    }

    return suma;
}

int main()
{
    int tab[]={2,5,6,7,89,23,51,66,1,52};
    int size=sizeof(tab)/sizeof(tab[0]);

    printf("%d", chooseValues(tab,size));

    return 0;
}
