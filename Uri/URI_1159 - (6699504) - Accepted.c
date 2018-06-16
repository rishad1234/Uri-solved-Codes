#include<stdio.h>
int main()
{
    int x,i,sum;
    while(1)
    {
        scanf("%d",&x);
        if(x==0){break;}
        sum=0;
        if(x%2!=0){x++;}
        for(i=x;i<x+10;i+=2)
        {
            sum+=i;
        }
        printf("%d\n",sum);


    }
    return 0;
}