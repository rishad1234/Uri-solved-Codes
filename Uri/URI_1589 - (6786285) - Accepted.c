#include<stdio.h>
int main(void)
{
    int a,b,sum=0,i,n;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        sum=a+b;
        printf("%d\n",sum);
    }
    return 0;
}
