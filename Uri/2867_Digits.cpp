#include<stdio.h>
#include<math.h>
int main()
{
    int input;
    scanf("%d", &input);
    int number, power;
    for(int i = 0; i < input; i++)
    {
        scanf("%d %d", &number, &power);

        float ans = power * log10(number) + 1;
        printf("%d\n", (int)ans);
    }
    return 0;
}
