#include<stdio.h>
int main()
{
    int odd,eve,pos,neg;
    int i,x;
    i=1;
    odd=eve=pos=neg=0;
    while(i<=5)
    {
        scanf("%d",&x);
        if(x%2==0) eve++;
        if(x%2!=0) odd++;
        if(x>0) pos++;
        if(x<0) neg++;
        i++;

    }
    printf("%d valor(es) par(es)\n",eve);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);

        return 0;
}
