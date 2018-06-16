#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    int ara [3]={3600,60,1};
    int are[3];
    for(i=0;i<3;i++)
    {
        are[i]=N/ara[i];
        N=N%ara[i];
    }


        printf("%d:%d:%d\n",are[0],are[1],are[2]);




}
