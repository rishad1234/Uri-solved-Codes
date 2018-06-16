#include<stdio.h>
int main()
{
    double m[12][12];
    int i,k,j,l,count=0;
    char t[2];
    double sum=0.0,avg;
    scanf("%s",&t);

    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&m[i][j]);
            if(j>i)
            {
                sum+=m[i][j];
                count++;
            }

        }
    }

    if(t[0]=='S') printf("%.1lf\n",sum);
    avg=(sum/(double)count);
    if(t[0]=='M') printf("%.1lf\n",avg);
    return 0;

}
