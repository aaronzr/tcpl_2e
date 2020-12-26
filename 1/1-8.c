#include <stdio.h>

/* count lines in input */
main()
{
    int c, nw; // whitespace includes blanks, tabs, \n

    nw = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n' || c == ' ' || c == '\t')
            ++nw;
    printf("%d\n", nw);
}
