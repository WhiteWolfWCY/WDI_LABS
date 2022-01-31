//Zad.10:
#include <stdio.h>

float srednia(int tab[], int length){
    int suma=0;
    for(int i=0; i<length; i++){
        suma+=tab[i];
    }
    
    float srednia=(float)suma/length;
    
    if(((int)srednia%2)==0 || ((int)srednia%3)==0){
        printf("Srednia parzysta lub podzielna przez 3! \n");
    }
    
    return srednia;
}

int main()
{
    int tab[]={9,4,5,6,7,8,9,3,4,5};
    int length=sizeof(tab)/sizeof(tab[0]);
    printf("%f", srednia(tab, length));
    return 0;
}


//Zad.11
#include <stdio.h>

int silnia(int n){
    int silnia=1;
    for(int i=1; i<=n; i++){
        silnia*=i;
    }
    
    return silnia;
}

int main()
{
    printf("%d", silnia(4));
}


//Zad.12
#include <stdio.h>

int silnia(int n){
    
    if(n<2){
        return 1;
    }else{
        return n*silnia(n-1);
    }
    
    
}

int main()
{
    printf("%d", silnia(4));
}


//Zad.13
#include <stdio.h>

void fib(int n){
    int a=0;
    int b=1;
    
    for(int i=0; i<n; i++){
        printf("%d", b);
        b=b+a;
        a=b-a;
    }
}

int main()
{
    fib(9);
}


//Zad.14
#include <stdio.h>

int fib(int n){
    if(n<3){
        return 1;
    }else{
        return fib(n-2)+fib(n-1);
    }
}

int main()
{
    int a=7;
    for(int i=1; i<=a; i++){
        printf("%d ", fib(i));
    }
}



//Zad.15
#include <stdio.h>

int trojkatna(int n){
    
    int liczba_trojkatna=0;
    
    for(int i=0; i<=n; i++){
        liczba_trojkatna+=i;
    }
    
    return liczba_trojkatna;
}

int main()
{
    printf("%d", trojkatna(4));
}


//Zad.16
#include <stdio.h>

int trojkatna(int n){
    if(n<2){
        return 1;
    }else{
        return n+trojkatna(n-1);
    }
}

int main()
{
    printf("%d", trojkatna(5));
}



//Zad. 17
#include <stdio.h>

void dec2bin(int dziesietna){
    int tab[31];
    int i=0;
    while(dziesietna!=0){
        tab[i++]=dziesietna%2;
        dziesietna/=2;
    }
    
    for(int j=i-1; j>=0; j--){
        printf("%d", tab[j]);
    }
}

int main()
{
    dec2bin(14);
}


