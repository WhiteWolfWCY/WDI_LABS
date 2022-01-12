#include <stdio.h>
#include <stdlib.h>

void wyswietl(int x){
	for(int i=1; i<=x; i++){
		printf("%d", i);
	}
}


int main()
{
    wyswietl(5);
    return 0;
}
