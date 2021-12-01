#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[]={2,52,65632,643,123,882,983,0,231};
    int size=sizeof(tab)/sizeof(tab[0]);
    int index=0;
    int ile_parzystych=0;

    do{
        printf("Index: %d element: %d \n", index, tab[index]);

        if(tab[index]%2==0){
            ile_parzystych++;
        }

        index++;
    }while(index<size);

    printf("Ile parzystych: %d", ile_parzystych);

    return 0;
}
