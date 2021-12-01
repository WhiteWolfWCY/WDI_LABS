#include <stdio.h>
#include <stdlib.h>

char *copy_Array(char text[], int size){
    char copied[size];
    for(int i=0; i<size; i++){
        copied[i]=text[i];
    }
    return *copied;
}

int main()
{
    char tab1[]="przykladowy_tekst";
    int size=sizeof(tab1);

    return 0;
}
