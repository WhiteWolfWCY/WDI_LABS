#include <stdio.h>
#include <stdlib.h>

int max_val(int, int, int);

int max_val(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }else if(b>a && b>c){
        return b;
    }else{
        return c;
    }

}

int main()
{
    printf("%d \n", max_val(4,65,2312));
    printf("%d", max_val(436234,52,212));

    return 0;
}
