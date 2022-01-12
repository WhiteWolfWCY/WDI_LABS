#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game(int random){
    int guess=0;
    int wybor=0;
    do{
        printf("Podaj swoj strzal: ");
        scanf("%d", &guess);
        if(guess==random){
            printf("Brawo, wygrales! Jesli nie chcesz grac dalej nacisnij 0 \n");
            scanf("%d", &wybor);
            if(wybor!=0){
                game(rand() % 101);
            }else{
            return;
            }
        }else if(guess<random){
            printf("Za malo!");
        }else{
            printf("Za duzo!");
        }
    }while(guess!=random);
}

int main()
{
    srand(time(NULL));
    time_t start, stop;
    time(&start);

    game(rand() % 101);

    time(&stop);
    time_t uplynelo = stop - start;

    printf("Czas gry: %d sekund. \n", uplynelo);
    return 0;
}
