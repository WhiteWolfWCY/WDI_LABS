#include <stdio.h>
#include <stdlib.h>

int main(){

int tab[5]={0,1,2,3,4};
float tab2[]={1.2, 4.5, 6.7, 5.5, 3.2, 2.87, 9.9};

int tab_dwuwymiar[3][3]={1,2,3,4,5,6,7,8,9};
int tab_trzywymiar[2][2][2]={1,2,3,4,5,6,7,8}; // twojwymiar, szescian 2x2x2

for(int i=0; i<5; i++){
    printf("%d \t", tab[i]);
}

printf("\n");

for(int i=0; i<7; i++){
    printf("%f \t", tab2[i]);
}

printf("\n");

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("%d ", tab_dwuwymiar[i][j]);
    }
    printf("\n");
}

return 0;
}