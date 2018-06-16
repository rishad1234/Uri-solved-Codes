#include<stdio.h>
int main()
{
    int a,b,c,count=0,x=0,y=0,z=0;
    char abc[]="Inter";
    char abc1[]="Gremio";
    while(1)
    {
        scanf("%d %d",&a,&b);
        printf("Novo grenal (1-sim 2-nao)\n");
        count=count+1;
        scanf("%d",&c);


        if(a>b){x++;}
        if(b>a){y++;}
        if(a==b){z++;}
        if(c!=1){break;}
    }
    printf("%d grenais\n",count);
    printf("Inter:%d\n",x);
    printf("Gremio:%d\n",y);
    printf("Empates:%d\n",z);

    if(x>y){printf("%s venceu mais\n",abc);}
    if(y>x){printf("%s venceu mais\n",abc1);}
    if(x==y){printf("Não houve vencedor\n");}

    return 0;
}