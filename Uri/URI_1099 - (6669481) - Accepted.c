#include<stdio.h>
int main()
{

    int n,i,a,b,temp=0,j,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(a%2==0)
        {
            a--;

        }
        a+=2;
        for(j=a;j<b;j+=2)
        {
            x+=j;
        }
        printf("%d\n",x);
        x=0;


    }
    return 0;
}
