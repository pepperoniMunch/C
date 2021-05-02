// Write a program that prints cm to in conversion table

#include <stdio.h>

int main(void)
{
    float cm;
    float in;
    float lower;
    float upper;
    float step;

    lower = 0.0;
    upper = 100.0;
    step = 5.0;

    printf("Convert CM to IN\n");
    printf("\n");

    cm = lower;
    while (cm <= upper)
    {
        in = cm * 0.39370;
        printf("%3.1f\t%6.1f\n", cm, in);
        cm = cm + step;
    }
}
