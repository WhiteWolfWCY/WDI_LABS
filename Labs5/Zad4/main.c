#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    struct Triangle trojkat;
    trojkat.a=4;
    trojkat.b=2;
    trojkat.c=4;
    printf("%d \n", obwod(trojkat));
    printf("%f", pole(trojkat));
    return 0;
}
