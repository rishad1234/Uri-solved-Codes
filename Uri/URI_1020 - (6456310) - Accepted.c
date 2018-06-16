#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int ara [3]={365,30,1};
    int are[3];
    
    for(i=0;i<3;i++)
    {
        are[i]=N/ara[i];
        N=N%ara[i];
    }
    printf("%d ano(s)\n",are[0]);
    printf("%d mes(es)\n",are[1]);
    printf("%d dia(s)\n",are[2]);
    return 0;



}
