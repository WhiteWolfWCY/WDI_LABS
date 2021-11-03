#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ile_wyrazow = 15;
    int wyraz_pierwszy = 0;
    int wyraz_drugi = 1;

    printf("Oto pierwszych %d wyrazow ciagu fibonacciego: \n", ile_wyrazow);
    printf("%d\n", wyraz_pierwszy);
    printf("%d\n", wyraz_drugi);

    for(int i=0; i<ile_wyrazow-2; i++){
        int wyraz=wyraz_pierwszy+wyraz_drugi;
        printf("%d\n", wyraz);
        int temp=wyraz_pierwszy;
        wyraz_pierwszy=wyraz_drugi;
        wyraz_drugi=wyraz;
    }

    return 0;
}