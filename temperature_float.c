#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0.0;
    upper = 300.0;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5 * (fahr - 32)) / (9);
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}