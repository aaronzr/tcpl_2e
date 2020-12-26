#include <stdio.h>

/* print Celsius-Fahrenheit table
 * for celsius = 0, 20, ..., 300; floating-point version */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    /* print a heading above the table */
    printf("%7s %5s\n", "Celsius", "Fahr."); /* %7s = print as string,
                                                at least 7 spaces wide */

    celsius = lower;
    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0; // '*' precedes '+' operation
        printf("%7.0f %5.1f\n", celsius, fahr); /* changed to %7.0f to match
                                                   length of 'Celsius'*/
        celsius += step; /* 'a += b' means 'a = a + b' */
    }
}

