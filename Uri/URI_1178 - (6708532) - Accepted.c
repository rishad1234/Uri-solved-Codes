#include<stdio.h>
int main()
{
    double x;
    double a[100];
    int i,k;
    scanf("%lf",&x);
    a[0]=x;
    for(i=1;i<100;i++)
    {
        a[i]=x/2;
        x=x/2;
    }
    for(k=0;k<100;k++)
    {
        printf("N[%d] = %.4lf\n",k,a[k]);
    }
    return 0;
}