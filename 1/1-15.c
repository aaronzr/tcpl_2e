#include <stdio.h>

// use a function for conversion
float f2c(float fahr); // prototype

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating-point version */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    /* print a heading above the table */
    printf("%3s %6s\n", "Fahr.", "Celsius"); /* %6s = print as string,
                                                at least 6 spaces wide */

    fahr = lower;
    while (fahr <= upper) {
        celsius = f2c(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

/* convert fahrenheit to celsius */
float f2c(float fahr)
{
    return (5.0/9.0) * (fahr - 32.0); 
}
