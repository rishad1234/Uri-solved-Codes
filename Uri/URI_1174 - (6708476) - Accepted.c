#include<stdio.h>
int main()
{
    double ar[100];
    double x;
    int i;
    for(i=0;i<100;i++)
    {
        scanf("%lf",&x);
        if(x>10.0){continue;}
        printf("A[%d] = %.1lf\n",i,x);
    }
    return 0;
}
