#include<stdio.h>
int main()
{
    int i,j,N;
    int ara[7]={100,50,20,10,5,2,1};
    int are[7];
    scanf("%d",&N);
    printf("%d\n",N);

    for(i=0;i<7;i++)
    {
        are[i]=N/ara[i];
        N=N%ara[i];
    }

    for(j=0;j<7;j++)
    {
        printf("%d nota(s) de R$ %d,00\n",are[j],ara[j]);
    }
    return 0;

}
