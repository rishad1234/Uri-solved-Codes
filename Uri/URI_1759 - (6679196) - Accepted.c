#include<stdio.h>
int main()
{
    char as[5]="Ho";
    char a[8]="Ho!";
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        printf("%s ",as);
    }
    printf("%s\n",a);
    return 0;
}
