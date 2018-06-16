#include<stdio.h>
int main()
{
    double A,B,C,tri,cir,tra,squ,rec;
    scanf("%lf %lf %lf",&A,&B,&C);
    tri=(1/2.0) * A * C;
    cir=3.14159 * pow(C,2);
    tra=(1/2.0) * C *(A+B);
    squ=pow(B,2);
    rec= A * B;
    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",tra);
    printf("QUADRADO: %.3lf\n",squ);
    printf("RETANGULO: %.3lf\n",rec);
    return 0;
}
