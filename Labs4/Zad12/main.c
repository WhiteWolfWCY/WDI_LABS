#include <stdio.h>
#include <stdlib.h>

char *short_Name(char text[], int len){
    char value[len];
    for(int i=0; i<len; i++){
        value[i]=text[i];
    }

    return value;
}

int main()
{
    char name[]="Mateusz_Martyna";
    int length=10;
    printf("%s", short_Name(name, length));
    return 0;
}
