#include<stdio.h>
int main()
{
   double i,d=0;
   for(i=1;i<=100;i++)
   {
       d+=1/i;
   }
   printf("%.2lf\n",d);
   return 0;
}
