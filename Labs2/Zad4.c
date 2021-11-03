#include <stdio.h>
#include <stdlib.h>

int main(){

float x = 4.0;
int y = 15;
int liczba1 = 140;
int liczba2 = 5;
int wynik = liczba1/liczba2;
float wynik_e = (float)(liczba1/x);
float wynik_f = (float)liczba1/(float)liczba2;

printf("Float na int: %d\n", (int)x);
printf("Int na float: %f\n", (float)y);
printf("Wynik dzielenia dwoch intow: %d\n", wynik);
printf("Wynik dzielenia dwoch int jako float: %f\n", (float)wynik);
printf("Dzielenie int przez float, wynik jako float: %f", wynik_e);
printf("Dzielenie dwoch int, wynik jako float: %f", wynik_f);

return 0;
}