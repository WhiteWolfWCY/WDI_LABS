#include <stdio.h>
#include <stdlib.h>

enum connection{
    disconnected=0,
    connected=1,
    connecting=2
};

struct PC{
    int connection;
    char ip[15];
    char pcName[100];
};

void computerStatus(struct PC x){
    int con=x.connection;

    printf("Status polaczenia: %d \n", con);
    printf("IPV4: %s \n", x.ip);
    printf("Nazwa komputera: %s \n", x.pcName);
}

int main()
{
    struct PC komputer;
    komputer.connection=1;
    strncpy(komputer.ip,"192.168.0.108", 100);
    strncpy(komputer.pcName,"MateuszPC", 100);

    computerStatus(komputer);


    return 0;
}
