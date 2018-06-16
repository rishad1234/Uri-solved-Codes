#include<stdio.h>
int main()
{
    int i,temp=0,j,k;
    int ara[20];
    for(i=0;i<20;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(j=0;j<10;j++)
    {
        temp=ara[j];
        ara[j]=ara[19-j];
        ara[19-j]=temp;
    }
    for(k=0;k<20;k++)
    {
        printf("N[%d] = %d\n",k,ara[k]);
    }
    return 0;


}
