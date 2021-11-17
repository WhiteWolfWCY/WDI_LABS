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

    int max_el=0;
    int min_el=999999999;
    int max_index=0;
    int min_index=999999999;

    for(int i=0; i<ile_liczb; i++){
        if(max_el<tab[i]){
            max_el=tab[i];
            max_index=i;
        }
        if(min_el>tab[i]){
            min_el=tab[i];
            min_index=i;
        }
    }

    printf("Maksymalna wartosc to %d na indeksie %d\n", max_el, max_index);
    printf("Maksymalna wartosc to %d na indeksie %d", min_el, min_index);

return 0;
}