#include <stdio.h>
#include <stdlib.h>

float srednia(float a, float b, float c, float d){
    float val = (a+b+c+d)/4;

    return val;
}

int main()
{
    printf("%f", srednia(2,2,4,5));
    return 0;
}
