#include<stdio.h>
int main()
{
    int n,i,x,y;
    float d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        if(y==0) printf("divisao impossivel\n");
        else
        {
            d=(float)x/(float)y;
            printf("%.1f\n",d);
        }

    }
    return 0;
}