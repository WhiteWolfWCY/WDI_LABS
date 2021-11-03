#include <stdio.h>
#include <stdlib.h>

int main(){

unsigned int liczba_1 = 15;
unsigned int liczba_2 = 3;
long int liczba_3 = 12;
long int liczba_4 = 4;
float liczba_5 = 6.3;
float liczba_6 = 2.1;
char znak1 = 10;
char znak2 = 2;

printf("Suma = %d Roznica = %d Mnozenie= %d Dzielenie = %d Reszta modulo = %d\n", liczba_1+liczba_2, liczba_1-liczba_2, liczba_1*liczba_2, liczba_1/liczba_2, liczba_1%liczba_2);
printf("Suma = %d Roznica = %d Mnozenie= %d Dzielenie = %d Reszta modulo = %d\n", liczba_3+liczba_4, liczba_3-liczba_4, liczba_3*liczba_4, liczba_3/liczba_4, liczba_3%liczba_4);
printf("Suma = %f Roznica = %f Mnozenie= %f Dzielenie = %f \n", liczba_5+liczba_6, liczba_5-liczba_6, liczba_5*liczba_6, liczba_5/liczba_6); // na floatach nie mozna wykonac dzialania modulo
printf("Suma = %d Roznica = %d Mnozenie= %d Dzielenie = %d Reszta modulo = %d\n", liczba_1+liczba_2, liczba_1-liczba_2, liczba_1*liczba_2, liczba_1/liczba_2, liczba_1%liczba_2);
printf("Suma = %d Roznica = %d Mnozenie= %d Dzielenie = %d Reszta modulo = %d\n", znak1+znak2, znak1-znak2, znak1*znak2, znak1/znak2, znak1%znak2);

// Inne typy danych to double, short, long, long double, long long

return 0;
}