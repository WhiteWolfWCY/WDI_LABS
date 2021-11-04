#include <stdio.h>
#include <stdlib.h>

int main(){
    int mnoznik=1;
    int liczba=0;

    printf("Podaj liczbe ktora chcesz odwrocic: ");
    scanf("%d", &liczba);

    int liczba_temp=liczba;

    while(liczba_temp!=0){
        mnoznik*=10;
        liczba_temp/=10;
    }

    int liczba_reverse = 0;

    while(liczba!=0){
        int reszta = liczba%10;
        liczba_reverse+=reszta*mnoznik;
        mnoznik/=10;
        liczba=liczba/10;
    }

    printf("Odwrocona liczba to: %d", liczba_reverse/10);

return 0;
}