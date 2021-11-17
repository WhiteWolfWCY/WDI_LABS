#include <stdio.h>
#include <stdlib.h>

int main(){
    int ile_liczb=0;
    
    printf("Ile liczb chcesz przechowac w tablicy?: ");
    scanf("%d", &ile_liczb);

    if(ile_liczb<10){
        printf("Wybrales liczbe ponizej 10!");
        return 0;
    }

    printf("\n");

    int tab[ile_liczb];

    for(int i=0; i<ile_liczb; i++){
        printf("Dodaj wartosc na %d miejscu tablicy: ", i+1);
        scanf("%d", &tab[i]);
        printf("\n");
    }

    int suma=0;

    for(int i=0; i<ile_liczb; i++){
        printf("%d \n", tab[i]);
        suma+=tab[i];
    }

    printf("Suma wszystkich liczb z tablicy: %d", suma);
return 0;
}