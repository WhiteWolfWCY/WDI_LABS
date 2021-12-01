#include <stdio.h>
#include <stdlib.h>

int czy_dodatnia(int a){
    if(a>0){
        return 1;
    }else if(a<0){
        return 0;
    }
}

int main()
{
    printf("%d \n", czy_dodatnia(5));
    printf("%d \n", czy_dodatnia(-3));
    return 0;
}
