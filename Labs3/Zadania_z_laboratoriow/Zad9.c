#include <stdio.h>
#include <stdlib.h>

int main(){
    int tab[]={2,2,3,3,3,4,2,3,3,4,5};

    float srednia=0;
    int najlepsza_ocena=0;
    int niedostateczne=0;
    int pozytywne=0;
    int rozmiar = sizeof(tab)/sizeof(tab[0]);
    int suma=0;

    for(int i=0; i<rozmiar; i++){
        if(tab[i]>2){
            pozytywne++;
        }else{
            niedostateczne++;
        }
        suma+=tab[i];
        if(najlepsza_ocena<tab[i]){
            najlepsza_ocena=tab[i];
        }
    }

    srednia=suma/rozmiar;

    printf("Średnia: %f \n", srednia);
    printf("Oceny pozytywne: %d \n", pozytywne);
    printf("Oceny niedostateczne: %d \n", niedostateczne);
    printf("Najlepsza ocena: %d", najlepsza_ocena);
return 0;
}