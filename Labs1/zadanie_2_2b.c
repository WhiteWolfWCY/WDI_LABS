#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[]={1,3,4,5,6,12,32,56,21,64,77,90,52,215};
    int ile_parzystych=0;
    int ile_nieparzystych=0;

    for(int i=0; i<14; i++){
        if(tab[i]%2==0)
            ile_parzystych++;
        else
            ile_nieparzystych++;
    }

    printf("Ilosc parzystych liczb w tablicy: %d", ile_parzystych);
    printf("Ilosc nieparzystych liczb w tablicy: %d", ile_nieparzystych);

    return 0;
}