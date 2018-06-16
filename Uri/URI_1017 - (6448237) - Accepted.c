#include<stdio.h>
int main()
{
    int hours,avg;
    double lit;
    scanf("%d %d",&hours,&avg);
    int total=hours * avg;
    lit=(double)total/12;
    printf("%.3lf\n",lit);
    return 0;
}
