#include <stdio.h>
#include <stdlib.h>
//Napisz funkcjê, która sprawdza znak liczby ca³kowitej. Je¿eli liczba dodatnia zwraca tekst „positive”,
//je¿eli ujemna to zwraca teks „negative”.
//Dodatkwo dopisz i wykorzystaj funkcjê która wyœwietla zawartoœæ tablicy znakowej (0,5 pkt).

char *znak_check(int a){
    if(a>0){
        return "positive";
    }else if(a<0){
        return "negative";
    }
}

void print_tab(char tab[], int size){
    for(int i=0; i<size; i++){
        printf("%c \n", tab[i]);
    }
}

int main()
{
    char znaki[]={'m','a','t','y','u','w'};
    int size = sizeof(znaki);
    print_tab(znaki, size);

    printf("%s \n", znak_check(4));
    printf("%s", znak_check(-3));
    return 0;
}
