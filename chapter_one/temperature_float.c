#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0.0;
    upper = 300.0;
    step = 20.0;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr-32);
        printf("%3.1f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}