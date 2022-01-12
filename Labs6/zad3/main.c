#include <stdio.h>
#include <stdlib.h>

void odliczanie(int x){
	for(int i=x; i>=0; i--){
		printf("%d", i);
	}
}

int main()
{
    odliczanie(7);
    return 0;
}
