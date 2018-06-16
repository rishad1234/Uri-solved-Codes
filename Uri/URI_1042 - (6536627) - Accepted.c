#include<stdio.h>
int main()
{
    int a,b,c,temp,i,j,k;
    scanf("%d %d %d",&a,&b,&c);
    i=a;
    j=b;
    k=c;
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
        }
    if(a>c)
    {
        temp=a;
        a=c;
        c=temp;
        }
     if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
        }
        printf("%d\n",a);
        printf("%d\n",b);
        printf("%d\n",c);
        printf("\n");
        printf("%d\n",i);
        printf("%d\n",j);
        printf("%d\n",k);
        return 0;

}