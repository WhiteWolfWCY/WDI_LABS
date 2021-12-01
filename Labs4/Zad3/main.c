#include <stdio.h>
#include <stdlib.h>

void czyParzysta(int a){
    if(a%2==0){
        printf("Jest parzysta!");
    }
}

int czyParzysta2(int a){
    if(a%2==0){
        return 1;
    }else{
        return 0;
    }
}

int czyParzysta3(int a){
    if(a%2==0){
        printf("Jest parzysta!");
        return 1;
    }else{
        printf("Jest nie parzysta!");
        return 0;
    }
}

int main()
{
    czyParzysta(18);
    printf("\n");
    printf("%d",czyParzysta2(3));
    printf("\n");
    printf("%d",czyParzysta3(52));
    return 0;
}
