#include <stdio.h>
#include <stdlib.h>

struct Calendar{
    int dzien;
    int miesiac;
    int rok;
    char nazwaKalendarza[30];
};

void print(struct Calendar kalendarz2){
    printf("dzien: %d \n", kalendarz2.dzien);
    printf("miesiac: %d \n", kalendarz2.miesiac);
    printf("rok: %d \n", kalendarz2.rok);
    printf("nazwa kalendarza: %s \n", kalendarz2.nazwaKalendarza);
}

void nextDay(struct Calendar kalendarz3){
    printf("dzien: %d \n", kalendarz3.dzien+1);
    printf("miesiac: %d \n", kalendarz3.miesiac);
    printf("rok: %d \n", kalendarz3.rok);
    printf("nazwa kalendarza: %s \n", kalendarz3.nazwaKalendarza);
}

void nextDayAndMonth(struct Calendar kalendarz3){
    printf("dzien: %d \n", kalendarz3.dzien+1);
    printf("miesiac: %d \n", kalendarz3.miesiac+1);
    printf("rok: %d \n", kalendarz3.rok);
    printf("nazwa kalendarza: %s \n", kalendarz3.nazwaKalendarza);
}

void nextDayAndMonthAndYear(struct Calendar kalendarz3){
    printf("dzien: %d \n", kalendarz3.dzien+1);
    printf("miesiac: %d \n", kalendarz3.miesiac+1);
    printf("rok: %d \n", kalendarz3.rok+1);
    printf("nazwa kalendarza: %s \n", kalendarz3.nazwaKalendarza);
}

int DayDifference(struct Calendar kalendarz4, struct Calendar kalendarz5){
    int roznica=kalendarz4.dzien - kalendarz5.dzien;
    return roznica;
}

int main()
{
    struct Calendar kalendarz1;
    struct Calendar kalendarz2;
    struct Calendar kalendarz3;
    struct Calendar kalendarz4;
    struct Calendar kalendarz5;
    printf("Podaj dzien: ");
    scanf("%d", &kalendarz1.dzien);
    printf("Podaj miesiac: ");
    scanf("%d", &kalendarz1.miesiac);
    printf("Podaj rok: ");
    scanf("%d", &kalendarz1.rok);
    printf("Podaj nazwe kalendarza: ");
    scanf("%s", kalendarz1.nazwaKalendarza);

    printf("\n");
    printf("dzien: %d \n", kalendarz1.dzien);
    printf("miesiac: %d \n", kalendarz1.miesiac);
    printf("rok: %d \n", kalendarz1.rok);
    printf("nazwa kalendarza: %s \n", kalendarz1.nazwaKalendarza);

    printf("\n");

    //podpunkt b
    kalendarz2.dzien=12;
    kalendarz2.miesiac=2;
    kalendarz2.rok=2008;
    strncpy(kalendarz2.nazwaKalendarza,"Gregorianski", 100);


    //podpunkt c
    print(kalendarz2);

    printf("\n");
    printf("Podaj dzien: ");
    scanf("%d", &kalendarz3.dzien);
    printf("Podaj miesiac: ");
    scanf("%d", &kalendarz3.miesiac);
    printf("Podaj rok: ");
    scanf("%d", &kalendarz3.rok);
    printf("Podaj nazwe kalendarza: ");
    scanf("%s", kalendarz3.nazwaKalendarza);
    nextDay(kalendarz3);
    printf("\n");
    nextDayAndMonth(kalendarz3);
    printf("\n");
    nextDayAndMonthAndYear(kalendarz3);
    printf("\n");

    //podpunkt d (nie wiem dlaczego nie dziala)
    kalendarz4.dzien=12;
    kalendarz4.miesiac=12;
    kalendarz4.rok=2008;
    strncpy(kalendarz4.nazwaKalendarza,"Gregorianski", 100);
    kalendarz5.dzien=22;
    kalendarz5.miesiac=2;
    kalendarz5.rok=2009;
    strncpy(kalendarz5.nazwaKalendarza,"Gregorianski", 100);
    printf("Roznica: %d", DayDifference(kalendarz4, kalendarz5));


    return 0;
}
