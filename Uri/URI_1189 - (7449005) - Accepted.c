#include<stdio.h>
int main()
{
    double m[12][12];
    int i,j;
    int n,p;
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
    for(i=0,n=1,p=10;i<5;i++)
    {
        for(j=n;j<=p;j++)
        {
             sum+=m[j][i];
        }
        n++;
        p--;
    }
    
    if(t[0]=='S') printf("%.1lf\n",sum);
    if(t[0]=='M') printf("%.1lf\n",sum/30.0);

    return 0;

}
