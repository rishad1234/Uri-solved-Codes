#include<stdio.h>
int main()
{
   double sal,tax,x,y,tax1,z,tax2;
   tax=0.00;
   x=0.00;
   y=0.00;
   z=0.00;
   tax1=0.00;
   tax2=0.00;
   scanf("%lf",&sal);
   if(sal>0.00 && sal<=2000.00)
        printf("Isento\n");
   if(sal>2000.00 && sal<=3000.00)
   {
       x=sal-2000.00;
       tax=(x*8)/100;
       printf("R$ %.2lf\n",tax);
   }
   if(sal>3000.00 && sal<=4500.00)
   {
       y=sal-3000.00;
       x=(sal-2000.00)-y;
       tax=(y*18)/100;
       tax1=(x*8)/100;
       printf("R$ %.2lf\n",tax+tax1);
   }
   if(sal>4500.00)
   {
       x=sal-4500.00;
       y=(sal-3000)-x;
       z=(sal-2000)-x-y;

       tax=(x*28)/100;
       tax1=(y*18)/100;
       tax2=(z*8)/100;
       printf("R$ %.2lf\n",tax+tax1+tax2);
   }
   return 0;
}