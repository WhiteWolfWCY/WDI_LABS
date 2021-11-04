#include <stdio.h>
#include <stdlib.h>

int main(){

    float liczba=0;
    printf("Podaj liczbe dla ktorej chcesz obliczyc sufit i podloge: ");
    scanf("%f", &liczba);

    int floor = (int)liczba;
    printf("Podloga liczby %f to: %d\n", liczba, floor);

    if(floor==liczba){
        printf("Sufit liczby %f to: %d", liczba, floor);
    }else{
        printf("Sufit liczby %f to: %d", liczba, floor+1);
    }
    // Program nie dziala dla liczb ujemnych - sprobowac to naprawic!
return 0;
}