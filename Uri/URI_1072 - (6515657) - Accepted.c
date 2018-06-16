#include<stdio.h>
int main()
{
    int N,X,i,a,b;
    a=0;
    b=0;
    scanf("%d",&N);
    for (i=1;i<=N;i++)
    {
        scanf("%d",&X);
        if(X>=10 && X<=20)
        {
            a=a+1;
        }
        else
            b=b+1;
    }
    printf("%d in\n",a);
    printf("%d out\n",b);
    return 0;
}