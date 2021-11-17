#include <stdio.h>
#include <stdlib.h>

int main(){
    int liczba1, liczba2;

    printf("Podaj liczbe 1: ");
    scanf("%d", &liczba1);
    printf("Podaj liczbe 2: ");
    scanf("%d", &liczba2);

    if(liczba1>liczba2){
        printf("%d\n", liczba1);
    }else{
        printf("%d\n", liczba2);
    }

    if(&liczba1>&liczba2){
        printf("%d", liczba1);
    }else{
        printf("%d", liczba2);
    }

return 0;
}