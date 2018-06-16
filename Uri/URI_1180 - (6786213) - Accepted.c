#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    int x[n];
    int i,j,count=0,a;

    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    a=x[0];
    for(j=0;j<n;j++)
    {
        if(a>x[j])
        {
            a=x[j];
            count=j;
        }


    }
    printf("Menor valor: %d\n",a);
    printf("Posicao: %d\n",count);

}