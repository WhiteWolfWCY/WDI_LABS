#include <stdio.h>
#include <stdlib.h>

int wybor(int a, int operacja){
    if(operacja==1){
        if(a<0){
            return a*(-1);
        }else{
            return a;
        }
    }else if(operacja==2){
        return a*a;
    }
}

int main()
{
    printf("%d \n", wybor(5,2));
    printf("%d \n", wybor(-55,1));
    return 0;
}
