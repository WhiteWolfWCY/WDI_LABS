#include <stdio.h>
#include <stdlib.h>

int sterownik(int a, int wybor){
    if(wybor==1){
        return modul(a);
    }else if(wybor==2){
        return potega(a);
    }
}

int modul(int a){
    if(a<0){
        return a*(-1);
    }else{
        return a;
    }
}

int potega(int a){
    return a*a;
}

int main()
{
    printf("%d \n", sterownik(5,2));
    printf("%d \n", sterownik(-55,1));
    return 0;
}
