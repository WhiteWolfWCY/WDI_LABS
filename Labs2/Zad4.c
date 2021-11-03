#include <stdio.h>
#include <stdlib.h>

int main(){

float x = 4.0;
int y = 15;
int liczba1 = 140;
int liczba2 = 5;
float wynik = liczba1/liczba2;
float wynik_e = (float)liczba1/x;
int wynik_f = liczba1/liczba2;

printf("Float na int: %d\n", (int)x);
printf("Int na float: %f\n", (float)y);
printf("Wynik dzielenia dwoch intow: %f\n", wynik);
printf("Wynik dzielenia dwoch int jako float: %f\n", wynik);
printf("Dzielenie int przez float, wynik jako float: %f\n", wynik_e);
printf("Dzielenie dwoch int, wynik jako float: %f", (float)wynik_f);

return 0;
}