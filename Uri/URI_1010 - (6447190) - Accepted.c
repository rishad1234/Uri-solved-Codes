#include<stdio.h>
int main()
{
    int pid1,pid2,num1,num2;
    double price1,price2,total;
    scanf("%d %d %lf",&pid1,&num1,&price1);
    scanf("%d %d %lf",&pid2,&num2,&price2);
    total=(num1 * price1)+(num2 * price2);
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
    return 0;

}