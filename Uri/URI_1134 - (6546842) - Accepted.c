#include<stdio.h>
int main()
{
    int n;
    int i,j,k;
    i=j=k=0;
    while (1)
    {
        scanf("%d",&n);
        if(n==1) i++;
        if(n==2) j++;
        if(n==3) k++;
        if(n==4) break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",i);
    printf("Gasolina: %d\n",j);
    printf("Diesel: %d\n",k);
    return 0;
}