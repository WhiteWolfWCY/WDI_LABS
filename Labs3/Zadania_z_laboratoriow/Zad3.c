#include <stdio.h>
#include <stdlib.h>

int main(){

char slowo[] = "Jakis losowy tekst przechowywany w tablicy";
char slowo_2[] = "";

for(int i=0; i<42; i++){
    printf("%c", slowo[i]); // pierwszy sposob wypisania
}

printf("\n");

printf("%s", slowo); // drugi sposob wypisania  

printf("Podaj tekst ktory chcesz zapisac w tablicy: ");
scanf("%[^\n]",slowo_2);  // scanf bierze input dopoki nie napotka nowej linni, w tym przypadku ignoruje spacje, wiec uzytkownik moze wpisac cale zdania
printf("\n");
printf("Slowo przechowane to: %s", slowo_2);

return 0;
}