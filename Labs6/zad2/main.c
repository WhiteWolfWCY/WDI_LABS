#include <stdio.h>
#include <stdlib.h>

void wyswietlRek(int x, int y){
	if(x<=0){
		return;
	}else{
		printf("%d", y-x+1);
		x--;
		wyswietlRek(x,y);
	}
}


int main()
{
    wyswietlRek(7,7);
    return 0;
}
