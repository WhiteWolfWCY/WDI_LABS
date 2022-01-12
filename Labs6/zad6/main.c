#include <stdio.h>
#include <stdlib.h>

int powerRec(int x, int y){
	if(y==0){
		return 1;
	}else{
		return x=x*powerRec(x,--y);
	}
}

int main()
{
    printf("%d", powerRec(2,5));
    return 0;
}
