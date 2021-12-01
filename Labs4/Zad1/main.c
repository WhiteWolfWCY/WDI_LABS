#include <stdio.h>
#include <stdlib.h>

void funkcja(char imie[], char nazwisko[], char zainteresowania[]){
    printf("%s \n", imie);
    printf("%s \n", nazwisko);
    printf("%s", zainteresowania);
}

int main()
{
    char imie[]={"Mateusz"};
    char nazwisko[]={"Martyna"};
    char zainteresowania[]={"Moje zainteresowania to: pilka nozna, motoryzacja, gotowanie, programowanie i gry komputerowe"};
    funkcja(imie, nazwisko, zainteresowania);
    return 0;
}
