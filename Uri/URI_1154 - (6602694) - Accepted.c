#include<stdio.h>
int main()
{
    int x,i=0,sum=0;
    double avg;
    while(1)
    {
        scanf("%d",&x);
        if(x<0) break;
        i++;
        sum=sum+x;

    }

    avg=(double)sum/(double)i;
    printf("%.2lf\n",avg);
    return 0;
}
