#include <stdio.h>
#include <stdlib.h>

int main(){

    float srednia=0;
    int pozytywne=0;
    int niedostateczne=0;
    int najlepsza_ocena=0;

    int ile_ocen;
    printf("Ile ocen chcesz dodac do tablicy?: ");
    scanf("%d", &ile_ocen);

    int tab[ile_ocen];
    
    for(int i=0; i<ile_ocen; i++){
        printf("Podaj ocene nr. %d: ", i+1);
        scanf("%d", &tab[i]);
    }

    int suma=0;

    for(int i=0; i<ile_ocen; i++){
        suma+=tab[i];
        if(tab[i]<3){
            niedostateczne++;
        }else{
            pozytywne++;
        }

        if(najlepsza_ocena<tab[i]){
            najlepsza_ocena=tab[i];
        }
    }

    srednia=(float)suma/ile_ocen;
    

    printf("Średnia: %f \n", srednia);
    printf("Oceny pozytywne: %d \n", pozytywne);
    printf("Oceny niedostateczne: %d \n", niedostateczne);
    printf("Najlepsza ocena: %d", najlepsza_ocena);
return 0;
}