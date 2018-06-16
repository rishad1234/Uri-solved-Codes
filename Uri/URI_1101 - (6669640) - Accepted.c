#include<stdio.h>
int main()
{

    int i,a,b,x=0,temp;

    while(1)
    {
        scanf("%d %d",&a,&b);

        if(a<=0 || b<=0) {break;}
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        for(i=a;i<=b;i++)
        {
            x+=i;
            printf("%d ",i);
        }
        printf("Sum=%d\n",x);
        x=0;
    }
    return 0;
}
