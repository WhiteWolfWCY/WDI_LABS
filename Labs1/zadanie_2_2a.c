#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba=24;

    if(liczba%2==0)
        printf("Liczba %d jest parzysta!", liczba);
    else   
        printf("Liczba %d jest nieparzysta!", liczba);

    return 0;
}