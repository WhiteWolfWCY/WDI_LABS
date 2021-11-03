#include <stdio.h>
#include <stdlib.h>

int main(){

int nr_albumu = 80566;
int blocker = 15;
int end = nr_albumu + blocker;

for(int i=nr_albumu; i<end; i++){
    printf("%d \n", i);
}

printf("\n");

int j = nr_albumu;
int k = 0;

while(k<blocker){
    if(j%2==0){
        printf("%d \n", j);
        k++;
    }

    j--;
}

int l = nr_albumu;
int m = 0;

printf("\n");

while(m<blocker){
    if(l%3==0 || l%3==0){
        printf("%d \n", l);
        m++;
    }

    l++;
}

return 0;
}