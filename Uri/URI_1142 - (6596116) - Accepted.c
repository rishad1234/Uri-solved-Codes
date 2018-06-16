#include<stdio.h>
int main()
{
    int n,i,x,y,z;
    i=1;x=1;
    scanf("%d",&n);
    if(n>0)
    {
        while(x<=n)
        {
            y=i+1;
            z=i+2;
            printf("%d %d %d PUM\n",i,y,z);
            i=i+4;
            x++;
        }
    }
    return 0;
}