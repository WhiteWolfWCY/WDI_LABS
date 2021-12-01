#include <stdio.h>
#include <stdlib.h>

int middle_val(int val[], int wymiar){

    return val[wymiar/2];
}

int main()
{
    int tab[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(tab)/sizeof(tab[0]);

    printf("%d", middle_val(tab, size));
}
