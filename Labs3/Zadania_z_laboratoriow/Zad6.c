#include <stdio.h>
#include <stdlib.h>

int main(){
    int ile_liczb=0;
    
    printf("Ile liczb chcesz przechowac w pierwszej tablicy?: ");
    scanf("%d", &ile_liczb);

    if(ile_liczb<5){
        printf("Wybrales liczbe ponizej 5!");
        return 0;
    }

    printf("\n");

    int tab[ile_liczb];

    for(int i=0; i<ile_liczb; i++){
        printf("Dodaj wartosc na %d miejscu tablicy: ", i+1);
        scanf("%d", &tab[i]);
        printf("\n");
    }

    int tab_reverse[ile_liczb];

    for(int i=0; i<ile_liczb; i++){
        tab_reverse[ile_liczb-1-i]=tab[i];
    }

    for(int i=0; i<ile_liczb; i++){
        printf("Pierwszy element tablicy 1: %d      i tablicy 2: %d\n", tab[i], tab_reverse[i]);
    }
return 0;
}