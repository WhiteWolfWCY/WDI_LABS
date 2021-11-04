#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c;

    printf("Podaj 1 liczbe: ");
    scanf("%d", &a);
    printf("Podaj 2 liczbe: ");
    scanf("%d", &b);
    printf("Podaj 3 liczbe: ");
    scanf("%d", &c);

    if(((a==b || a==c) && b!=c) || (b==c && a!=b) ){
        printf("1");
    }else{
        printf("0");
    }

return 0;
}