#include <stdio.h>
#include <stdlib.h>

int main(){

int a, b;
printf("Podaj pierwsza liczbe: ");
scanf("%d", &a);
printf("Podaj druga liczbe: ");
scanf("%d", &b);

if(b==0){
    printf("Nie wolno dzielic przez zero!");
    return 1;
}else{
    printf("%d / %d = %d", a, b, a/b);
}

return 0;
}