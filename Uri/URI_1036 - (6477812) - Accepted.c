#include<stdio.h>
int main()
{
    double a,b,c,x,R1,R2;
    scanf("%lf %lf %lf",&a,&b,&c);

    x=b*b-4*a*c;

    if (x<0)
    {
        printf("Impossivel calcular\n");

    }
    else if(a==0.0)
    {
        printf("Impossivel calcular\n");
    }

    else
    {

    R1=(-b+sqrt(x))/(a+a);
    R2=(-b-sqrt(x))/(a+a);
    printf("R1 = %.5lf\n",R1);
    printf("R2 = %.5lf\n",R2);

    }


    return 0;

}
