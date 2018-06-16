#include<stdio.h>
int main()
{
    int eve;
    int i,x;
    i=1;
    eve=0;
    while(i<=5)
    {
        scanf("%d",&x);
        if(x%2==0) eve++;



        i++;

    }
    printf("%d valores pares\n",eve);


        return 0;
}