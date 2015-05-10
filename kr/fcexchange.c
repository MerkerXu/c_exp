#include <stdio.h>


float f2c(float fahr)
{
    return (5.0/9.0) * (fahr - 32);
}

float c2f(float celsius)
{
    return 9.0/5.0 * celsius + 32;
}

int
main()
{
    float fahr, celsius;
    int lower, upper, step;
    printf("%3s\t%3s\t\t%3s\t%3s\n", "F", "C", "C", "F");
    
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper) {
        printf("%3.0f\t%3.1f", fahr, f2c(fahr));
        printf("\t\t");
        printf("%3.0f\t%3.1f\n", fahr, c2f(fahr));
        fahr += step;
    }

    return 0;
}
