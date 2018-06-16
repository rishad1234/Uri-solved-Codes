#include<stdio.h>
int main()
{
    int n,fac=1;
    scanf("%d",&n);

    while (n!=1)
    {
        fac*=n;
        n--;
    }
    printf("%d\n",fac);
}
