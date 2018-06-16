#include<stdio.h>
int main()
{
    int i,pos;
    pos=0;
    double x;
    i=1;
    while(i<=6)
    {
        scanf("%lf",&x);
        if(x>0) pos++;
        i++;

    }
    printf("%d valores positivos\n",pos);
    return 0;
}
