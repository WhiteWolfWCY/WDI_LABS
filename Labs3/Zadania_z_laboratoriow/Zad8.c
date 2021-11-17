#include <stdio.h>
#include <stdlib.h>

int main(){

    char tekst_jawny[]={"Zygmunt ma kota"};
    int klucz = 2;

    int size = sizeof(tekst_jawny)/sizeof(tekst_jawny[0]);
    char tekst_szyfr[size];
    for(int i=0; i<size; i++){
        tekst_szyfr[i]=tekst_jawny[i]+klucz;
    }
    printf("Tekst jawny: %s\n", tekst_jawny);
    printf("Tekst zaszyfrowany: %s\n", tekst_szyfr);

    char test_szyfru[size];

    for(int i=0; i<size; i++){
        test_szyfru[i]=tekst_szyfr[i]-klucz;
    }

    printf("Tekst ponownie rozszyfrowany: %s", test_szyfru);

return 0;
}