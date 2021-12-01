#include <stdio.h>
#include <stdlib.h>

float srednia(int val[], int dzielnik){
    float suma=0;
    for(int i=0; i<dzielnik; i++){
        suma+=val[i];
    }

    return suma/dzielnik;
}

int main()
{
    int tab[]={4,6,7,2,3,5};
    int size = sizeof(tab)/sizeof(tab[0]);
    printf("%f", srednia(tab, size));
}
