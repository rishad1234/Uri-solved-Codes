#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    while (i<=9)
    {
        for(j=7;j>=5;j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
        i=i+2;
    }
    return 0;



}