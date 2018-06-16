#include<stdio.h>
int main()
{
    int x,z,count=0,i,sum=0;
    scanf("%d %d",&x,&z);
    while(z<=x)
    {
        scanf("%d",&z);
    }
    for(i=1;i<z;i++)
    {
        count=count+1;
        sum=sum+x;
        x++;
        if(sum>=z){break;}
    }
    printf("%d\n",count);
    return 0;

}