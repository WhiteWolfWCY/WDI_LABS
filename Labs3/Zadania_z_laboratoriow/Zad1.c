#include <stdio.h>
#include <stdlib.h>

int main(){
    int nr_albumu=80566;
    for(int i=nr_albumu; i<nr_albumu+100; i++){

        if(i%2==0){
            printf("%d parzysta\n", i);
        }else{
            printf("%d \n", i);
        }

        if(i+1==60){
            continue;
        }
        if(i+1==95){
            break;
        }
    }
return 0;
}