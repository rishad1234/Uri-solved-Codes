#include<stdio.h>
int main()
{
    int start,finish,hours;
    scanf("%d %d",&start,&finish);
    hours=(24-start)+finish;

    if(hours>24)
    hours=abs(24-((24-start)+finish));



    printf("O JOGO DUROU %d HORA(S)\n",hours);
    return 0;
}
