#include <stdio.h>
#include <stdlib.h>

int main(){

int n;
int suma=0;

printf("Podaj n: ");
scanf("%d", &n);

for(int i=0; i<=n; i++){
    suma+=i;
}

printf("Suma to: %d", suma);

return 0;
}