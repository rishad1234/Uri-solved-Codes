#include<stdio.h>

int main(){
    int pct;
    double sal,ns,r;
    char pc;
    scanf("%lf",&sal);
    pc='%';
    if(sal>=0 && sal<=400)
              {
              ns=sal*1.15;
              r=ns-sal;
              pct=15;
              }
    else if(sal>400 && sal<=800)
         {
         ns=sal*1.12;
         r=ns-sal;
         pct=12;
         }
    else if(sal>800 && sal<=1200)
         {
         ns=sal*1.10;
         r=ns-sal;
         pct=10;
         }
    else if(sal>1200 && sal<=2000)
         {
         ns=sal*1.07;
         r=ns-sal;
         pct=7;
         }
    else if(sal>2000)
         {
         ns=sal*1.04;
         r=ns-sal;
         pct=4;
         }
    printf("Novo salario: %.2lf\n",ns);
    printf("Reajuste ganho: %.2lf\n",r);
    printf("Em percentual: %d %c\n",pct,pc);

    return 0;
}