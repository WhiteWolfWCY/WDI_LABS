#include <stdio.h>
#include <stdlib.h>

int main(){

int wybor;

printf("1. Zamiana z KM na kW\n");
printf("2. Zamiana z kW na KM\n");

printf("Ktora operacje chcesz wykonac?: ");
scanf("%d", &wybor);
float value;
if(wybor==1){
    printf("Podaj ilosc KM: ");
    scanf("%f", &value);
    printf("Wartosc zamieniona na kW to: %f", value*0.74);
}else if(wybor==2){
    printf("Podaj ilosc kW: ");
    scanf("%f", &value);
    printf("Wartosc zamieniona na KM to: %f", value*1.36);
}else{
    printf("Zla operacja!");
}

return 0;
}