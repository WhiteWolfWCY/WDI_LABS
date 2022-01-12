#include <stdio.h>
#include <stdlib.h>

void rekurencja(int x){
	if(x<0){
		return;
	}else{
		printf("%d", x);
		rekurencja(x-1);
	}
}

int main()
{
    rekurencja(5);
    return 0;
}
