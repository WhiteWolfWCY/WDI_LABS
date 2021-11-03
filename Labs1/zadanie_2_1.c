#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = 2;

    int wynik_dod = a+b;
    int wynik_od = a-b;
    int wynik_mno = a*b;
    int wynik_dziel = a/b;
    int wynik_modulo = a%b;

    printf("To jest pierwszy program napisany w jezyku C \n");
    printf("Bedzie on wykonywal podstawowe dzialania matematuczne na dwoch liczbach\n");
    printf("1. Dodawanie: %d+%d=%d \n", a, b, wynik_dod);
    printf("2. Odejmowanie: %d-%d=%d \n", a, b, wynik_od);
    printf("3. Mnozenie: %d*%d=%d \n", a, b, wynik_mno);
    printf("4. Dzielenie calkowire: %d/%d=%d \n", a, b, wynik_dziel);
    printf("5. Reszta z dzielenia: %d mod %d=%d \n", a, b, wynik_modulo);

    return 0;
}