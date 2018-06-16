#include<stdio.h>
int main()
{
    double m[12][12];
    char t[2];
    int j,i;
    int l;
    double sum=0.0;
    scanf("%d",&l); ///number of line
    scanf("%s",&t); /// sum or avg S or M

    for(i=0;i<=11;i++)
    {
        for(j=0; j<=11; j++)
        {
        scanf("%lf", &m[i][j]);
        if(i==l)
            sum+=m[i][j];
        }
    }



    if(t[0]=='S') printf("%.1lf\n",sum);
    else if(t[0]=='M') printf("%.1lf\n",(sum/12.0));

    return 0;
}
