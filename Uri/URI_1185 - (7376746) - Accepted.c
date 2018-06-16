#include<stdio.h>
int main()
{
    double m[12][12];
    int i,k,j,l;
    char t[2];
    double sum=0.0,avg;
    scanf("%s",&t);

    for(i=0;i<12;i++)
    {
        for(j=0,k=0;j<12;j++,k++)
        {
            scanf("%lf",&m[i][j]);
        }
    }
    l=10;
    for(i=0;i<12;i++)
    {
        for(j=0;j<=l;j++)
        {
            sum+=m[i][j];

        }
        l--;
    }
    if(t[0]=='S') printf("%.1lf\n",sum);
    avg=(sum/66.0);
    if(t[0]=='M') printf("%.1lf\n",avg);
    return 0;

}
