#include <stdio.h>

#define MAX_CHAR    256 /* max ascii value */

/* draw histogram of character frequencies */
main()
{
    int c, i;
    int nchar[MAX_CHAR];
    
    for (i = 0; i < MAX_CHAR; ++i) {
        nchar[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        ++nchar[c]; 
    }

    for (i = 0; i < MAX_CHAR; ++i) {
        // print row of histogram if nonzero
        if (nchar[i] != 0) {
            if (i == ' ') printf("\' \':\t");
            else if (i == '\t') printf("\'\\t\':\t");
            else if (i == '\n') printf("\'\\n\':\t");
            else printf("\'%c\':\t", i);
            for (int j = 0; j < nchar[i]; ++j) {
                printf("x");
            }
            printf("\n");
        }
    }
}
