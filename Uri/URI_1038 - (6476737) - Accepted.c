#include<stdio.h>
int main()
{
    int code;
    double price[5]={4.00,4.50,5.00,2.00,1.50};
    int quantity;



    scanf("%d %d",&code,&quantity);




    printf("Total: R$ %.2lf\n",price[code-1]*(double)quantity);



return 0;
}