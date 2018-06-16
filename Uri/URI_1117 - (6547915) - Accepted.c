#include <stdlib.h>
#include <stdio.h>

int main()
{
    float a,b, media;

    while(scanf("%f",&a),(a<0 || a>10))
    {
       printf("nota invalida\n");
   }
   while(scanf("%f",&b),(b<0 || b>10))
    {
       printf("nota invalida\n");
   }
      media=(a+b)/2;
     printf("media = %.2f\n", media);
return 0;
}
