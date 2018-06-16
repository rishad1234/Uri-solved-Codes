#include<stdio.h>
int main()
{
    int x,y;
    double avg;
    scanf("%d %d",&x,&y);
    avg=(double)x/(double)y;
    printf("%.2lf\n",avg);
    return 0;
}