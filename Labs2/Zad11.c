#include <stdio.h>
#include <stdlib.h>

int main(){

    int n=0;
    printf("Z ilu liczb chcesz policzyc srednia?: ");
    scanf("%d", &n);

    float tab[n];

    for(int i=0; i<n; i++){
        printf("Podaj %d liczbe: ", i+1);
        scanf("%f", &tab[i]);
    }

    float suma=0;

    for(int i=0; i<n; i++){
        suma+=tab[i];
    }

    printf("Srednia tych liczb to: %f", suma/n);

return 0;
}