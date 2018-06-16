#include<stdio.h>
int main()
{
    int empNum,hours;
    double money,salary;
    scanf("%d %d %lf",&empNum,&hours,&money);
    salary=(double)hours * money;
    printf("NUMBER = %d\n",empNum);
    printf("SALARY = U$ %.2lf\n",salary);
    return 0;


}
