#include <stdio.h>

/**
 * 当fahr=0, 20, ..., 300时，分别打印华氏
 * 温度与摄氏温度的对照表*/

int
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step  = 20;

    printf("%3s\t%6s\n", "F", "C");
    fahr = lower;
    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32) ;
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
