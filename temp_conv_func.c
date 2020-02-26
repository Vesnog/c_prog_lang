#include <stdio.h>

/* print Fahrenheit-celsius table
 * for fahr = 0, 20, ..., 300; floating point
 */

float fahr2celsius(float fahr);
float celsius2fahr(float celsius);
int main()
{
    float fahr, celsius, cels;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature */
    upper = 300; /* upper limit of temp */
    step = 20; /* step size */

    fahr = lower;
    printf("%10s %10s\n", "Fahrenheit", "Celsius");
    while (fahr <= upper)
    {
        celsius = fahr2celsius(fahr);
        printf("%10.0f %9.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    cels = lower;
    printf("%10s %10s\n", "Celsius", "Fahrenheit");
    while (cels <= upper)
   {
        fahr = celsius2fahr(celsius);
        printf("%10.0f %9.1f\n", cels, fahr);
        cels = cels + step;
    }
    return 0;
}
float fahr2celsius(float fahr)
{
    float celsius;
    celsius = (5.0/9.0) * (fahr - 32.0);
    return celsius;
}
float celsius2fahr(float celsius)
{
    float fahr;
    fahr = (9.0/5.0) * celsius + 32;
    return fahr;
}
