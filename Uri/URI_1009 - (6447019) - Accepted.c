#include<stdio.h>
int main()
{
    char name[20];
    double salary,sales,total;
    scanf("%s",name);
    scanf("%lf %lf",&salary,&sales);
    total=salary+(sales *.15);
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;

}