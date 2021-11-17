#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
int rozmiar;

    printf("Jak duza tablice chcesz zapelnic losowymi liczbami?: ");
    scanf("%d", &rozmiar);
    if(rozmiar<10){
        printf("Wybrales za mala liczbe!");
        return 0;
    }

    int tab[rozmiar];
    srand(time(NULL));
    for(int i=0; i<rozmiar; i++){
        int r=rand()%200;
        tab[i]=r;
    }

    for(int i=0; i<rozmiar; i++){
        for(int j=1; j<rozmiar; j++){
            if(tab[j]>tab[j-1]){
                int temp=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=temp;
            }
        }
    }

    for(int i=0; i<rozmiar; i++){
        printf("%d \n", tab[i]);
    }

return 0;
}