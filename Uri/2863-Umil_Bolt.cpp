#include<stdio.h>
int main()
{
    int input;
    while(scanf("%d", &input) != EOF)
    {
        float time[input];
        float shortest = 20.0;
        for(int i = 0; i < input; i++)
        {
            scanf("%f", time + i);
            if(time[i] < shortest){
                shortest = time[i];
            }
        }
        printf("%.2f\n", shortest);


    }
    return 0;
}
