#include<stdio.h>
void fibo(unsigned long long a);
int main()
{
    int n,i;
    unsigned long long fi;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%llu",&fi);
        fibo(fi);

    }
    return 0;
}

void fibo(unsigned long long a)
{
    unsigned long long d,b=0,c=1,i;
    for(i=1;i<a;i++)
    {
        d=b+c;
        b=c;
        c=d;

    }
    if(a==0) printf("Fib(0) = 0\n");
    else if(a==1) printf("Fib(1) = 1\n");

    else printf("Fib(%llu) = %llu\n",a,d);
}