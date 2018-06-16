#include<stdio.h>
int main()
{
    double A,B,C,area;
    scanf("%lf %lf %lf",&A,&B,&C);

    area=((A+B)*C)/2;
    if(B+C>A && A+B>C && A+C>B)
    {
        printf("Perimetro = %.1lf\n",A+B+C);
    }
    else
        printf("Area = %.1lf\n",area);
    return 0;
}