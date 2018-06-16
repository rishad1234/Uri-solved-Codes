#include <stdio.h>

int main() {

     int i,N[20],aux;

    for(i=0;i<20;i++){
        scanf("%d",&N[i]);
    }

    for(i=0;i<10;i++){
        aux   = N[i];
        N[i]  = N[19-i];
        N[19-i]= aux;
    }

    for(i=0;i<20;i++){
        printf("N[%i] = %d\n",i,N[i]);
    }

    return 0;
}
