#include <stdio.h>

/* copy input to output; 1st version */
main()
{
    int c; // if c were char, could not hold -1 = EOF

    c = getchar();
    while (c != EOF) {
        printf("\\%d\n", c); // print the value of each char
        c = getchar();
    }
    printf("\\%d", c); // print the value of EOF
}
