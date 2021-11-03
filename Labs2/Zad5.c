#include <stdio.h>
#include <stdlib.h>

int main(){

int a=10;
printf("%d\n", a+=a+1);
printf("%d\n", a+=a++);
printf("%d\n", a+= ++a);
printf("%d\n", a+=a-1);

printf("--------\n");

int b=2;
printf("%d\n", b*=b+1);
printf("%d\n", b*=b++);
printf("%d\n", b*= ++b);
printf("%d\n", b*=b-1);

printf("--------\n");

int d=500;
printf("%d\n", d-=d+1);
printf("%d\n", d-= d++);
printf("%d\n", d-= ++d);
printf("%d\n", d-=d-1);

printf("--------\n");

return 0;
}