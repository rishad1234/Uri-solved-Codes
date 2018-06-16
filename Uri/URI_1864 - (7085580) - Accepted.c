#include<stdio.h>
int main()
{
    char s[34]="LIFE-IS-NOT-A-PROBLEM-TO-BE-SOLVED";
    int n,i;
    while(scanf("%d",&n)!= -1)
    {
        for(i=0;i<n;i++)
        {
            if(s[i]=='-') {printf(" "); continue;}
            printf("%c",s[i]);

        }
        printf("\n");
    }
    return 0;

}