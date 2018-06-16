#include<stdio.h>
int main()
{
    int v,i;
    int ara[10];
    scanf("%d",&v);
    ara[0]=v;
     for(i=1;i<10;i++)
     {

         ara[i]=ara[i-1]*2;

     }
     for(i=0;i<10;i++)
     {
         printf("N[%d] = %d\n",i,ara[i]);
     }
     return 0;
}
