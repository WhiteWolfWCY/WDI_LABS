#include <stdio.h>
#include <stdlib.h>

//1. albo 6. Program, który spróbuje wypisać za pomocą pętli "while" kolejne 15 liczb naturalnych mniejszych od Twojego albumu. 
//W przypadku liczby podzielnej przez 10 nie wyświetlaj nic (wtedy po prostu program wyświetli mniej liczb).

int main(){

int nr_albumu=80566;
int counter=80566-15;

while(counter<nr_albumu){
    if(counter%10!=0){
        printf("%d \n", counter);
    }
    counter++;
}

return 0;
}