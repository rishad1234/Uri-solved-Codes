#include<stdio.h>
int main()
{
    int n,i,s[100];
    scanf("%d",&n);
    s[0]=0;
    s[1]=1;
    for(i=2;i<n;i++)
    {
        s[i]=s[i-1]+s[i-2];
    }
    printf("0");
    for(i=1;i<n;i++)
    {
        printf(" %d",s[i]);
    }
    printf("\n");
    return 0;
}
