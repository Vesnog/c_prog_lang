#include <stdio.h>

/* print Fahrenheit-Celcius table
 * for fahr = 0, 20, ..., 300; floating point
 */
main()
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
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%10.0f %9.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    cels = lower;
    printf("%10s %10s\n", "Celsius", "Fahrenheit");
    while (cels <= upper)
    {
        fahr= (9.0/5.0) * cels + 32;
        printf("%10.0f %9.1f\n", cels, fahr);
        cels = cels + step;
    }

}
