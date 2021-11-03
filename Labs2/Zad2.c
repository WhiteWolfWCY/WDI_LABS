#include <stdio.h>
#include <stdlib.h>

int main(){

unsigned int liczba_1 = 15;
unsigned int liczba_2 = 3;
long int liczba_3 = 12;
long int liczba_4 = 4;
float liczba_5 = 6;
float liczba_6 = 2;
char znak1 = 10;
char znak2 = 2;

printf("%d + %d = %d\n", liczba_1, liczba_2, liczba_1+liczba_2);
printf("%d - %d = %d\n", liczba_1, liczba_2, liczba_1-liczba_2);
printf("%d * %d = %d\n", liczba_1, liczba_2, liczba_1*liczba_2);
printf("%d / %d = %d\n", liczba_1, liczba_2, liczba_1/liczba_2);
printf("%d  %d = %d", liczba_1, liczba_2, liczba_1%liczba_2);


return 0;
}