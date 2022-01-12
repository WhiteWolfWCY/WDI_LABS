#include <stdio.h>
#include <stdlib.h>

int power(int x, int y){
    int wynik=1;
	for(int i=0; i<y; i++){
		wynik=wynik*x;
	}

	return wynik;
}

int main()
{
    printf("%d", power(2,5));
    return 0;
}
