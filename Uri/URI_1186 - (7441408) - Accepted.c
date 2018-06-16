#include<stdio.h>
int main()
{
    double m[12][12];
    int i,j,n=11;
    char t[2];
    double sum=0.0;
    scanf("%s",&t);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&m[i][j]);
        }
    }
    for(i=1;i<12;i++)
    {
        for(j=n;j<12;j++)
        {
            sum+=m[i][j];
        }
        n--;
    }


    if(t[0]=='S') printf("%.1lf\n",sum);
    if(t[0]=='M') printf("%.1lf\n",sum/66.0);

    return 0;

}