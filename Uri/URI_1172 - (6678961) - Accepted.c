#include <stdio.h>
#include <stdlib.h>

int main()
{
int X[10] = {0};
int i=0;

    while (i<10) {
        scanf("%d", &X[i]);
    if ((X[i]==0) || (X[i]<0)) {
        X[i] = 1;
        printf("X[%d] = %d\n", i, X[i]);
    }
    else {
        printf("X[%d] = %d\n",i, X[i]);

    }
        i++;
    }
    return 0;
}