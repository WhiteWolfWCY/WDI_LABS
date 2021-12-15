#include <stdio.h>
#include <stdlib.h>

int pole(int bok1, int bok2){
    int pole=bok1*bok2;

    return pole;
}

int obwod(int bok1, int bok2){
    int obwod=bok1*2 + bok2*2;

    return obwod;
}

int main()
{
    printf("%d \n", pole(2,4));
    printf("%d", obwod(5,3));
    return 0;
}
