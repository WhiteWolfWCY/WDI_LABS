#include <stdio.h>
#include <stdlib.h>

enum dniTygodnia{
    Poniedzialek,
    Wtorek,
    Sroda,
    Czwartek,
    Piatek,
    Sobota,
    Niedziela
};

void days(int dzien){
    switch(dzien){
    case Poniedzialek:
        printf("Poniedzialek \n");
        break;
    case Wtorek:
        printf("Wtorek \n");
        break;
    case Sroda:
        printf("Sroda \n");
        break;
    case Czwartek:
        printf("Czwartek \n");
        break;
    case Piatek:
        printf("Piatek \n");
        break;
    case Sobota:
        printf("Sobota \n");
        break;
    case Niedziela:
        printf("Niedziela \n");
        break;
    default:
        printf("Jakis inny dzien");
    }

}

int main()
{
    days(0);
    days(1);
    days(4);
    days(5);
    days(6);
    return 0;
}
