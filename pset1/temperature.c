#include <stdio.h>

/* 
    Show table of Fahrenheit to Celsius conversion 
*/

int main()
{
    float farengate, celsius;
    int lower, upper, step;

    lower = 0;   // lower border
    upper = 100; // upper border
    step = 10;   // step

    farengate = lower;

    printf("Fº\t| Cº\n");
    
    while (farengate <= upper)
    {
        celsius = 5 * (farengate - 32) / 9;
        printf("%.2f\t| %.2f\n", farengate, celsius);
        farengate = farengate + step;
    }
}
