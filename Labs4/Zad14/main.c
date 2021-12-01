#include <stdio.h>
#include <stdlib.h>

void copy_Array(int tab1[], int tab2[], int size){
    for(int i=0; i<size; i++){
        tab2[i]=tab1[i];
    }

    for(int i=0; i<size; i++){
        printf("%d ", tab2[i]);
    }
}

int main()
{
    int val1[]={1,2,4,6,7,84,34,66};
    int size=sizeof(val1)/sizeof(val1[0]);
    int val2[size];
    copy_Array(val1, val2, size);
    return 0;
}
