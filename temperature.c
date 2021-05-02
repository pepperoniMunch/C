#include <stdio.h>

// Print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300

int main(void)
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; // Lower limit of temperature scale
    upper = 300; // Upper limit of temperature scale
    step = 20; // Increment value

    fahr = lower; // Assign 0 to fahr
    while (fahr <= upper)
    {
        celsius = (5 * (fahr - 32)) / ( 9 );
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}