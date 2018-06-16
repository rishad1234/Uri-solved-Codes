#include<stdio.h>
int main()
{
    int i,pos;
    pos=0;
    double x,count,y;
    count=0;

    i=1;
    while(i<=6)
    {
        scanf("%lf",&x);
        if(x>0)
        {
          pos++;
          count=(count+x);
        }

        i++;

    }
    y=count/(double)pos;
    printf("%d valores positivos\n",pos);
    printf("%.1lf\n",y);
    return 0;
}
