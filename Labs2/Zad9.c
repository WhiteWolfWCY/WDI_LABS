#include <stdio.h>
#include <stdlib.h>

int main(){

int n;
printf("Podaj liczbe ocen z ktorych chcesz wyliczyc srednia: ");
scanf("%d", &n);
int suma=0;
int ile_niedostatecznych=0;
int ocena;

for(int i=0; i<n; i++){
    printf("Podaj %d ocene: ", i+1);
    scanf("%d", &ocena);
    suma+=ocena;
    if(ocena==1){
        ile_niedostatecznych++;
    }
}

float srednia=suma/n;
printf("Srednia wynosi: %f\n", srednia);
printf("Ilosc ocen niedostatecznych to: %d", ile_niedostatecznych);

return 0;
}