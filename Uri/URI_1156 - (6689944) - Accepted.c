#include<stdio.h>
int main()
{
   float i,j,sum=0;
   for(i=1.00,j=1.00;i<=39.00;i=i+2.00,j=j*2.00)
   {
       sum=sum+(i/j);

   }
   printf("%.2f\n",sum);
   return 0;
}
