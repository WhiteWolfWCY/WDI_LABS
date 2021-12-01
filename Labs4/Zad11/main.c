#include <stdio.h>
#include <stdlib.h>

void print_Name(char tab[]){
    printf("%s", tab);
}

int main()
{
    char value[]="Mateusz Martyna";
    print_Name(value);
    return 0;
}
