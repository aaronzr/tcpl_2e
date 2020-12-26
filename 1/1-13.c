#include <stdio.h>
#include <assert.h>

#define MAX_LEN 15  /* longest expected word */
#define IN  1   /* inside word */
#define OUT 0   /* outside word */

/* draw histogram of length of words */
main()
{
    int c, i, wl, state;
    int nlength[MAX_LEN];
    
    wl = 0;
    state = OUT;
    for (int i = 0; i < MAX_LEN; ++i) {
        nlength[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') { // whitespace
            state = OUT;
        } else if (state == OUT) { // first letter of new word
            if (wl != 0) 
                assert (wl < MAX_LEN);
                ++nlength[wl];
            state = IN;
            wl = 0;
            ++wl;
        } else { // next char in word
            ++wl;
        }
    }

    for (i = 0; i < MAX_LEN; ++i) {
        // print row of histogram
        printf("%d:\t", i + 1);
        for (int j = 0; j < nlength[i]; ++j) {
            printf("x");
        }
        printf("\n");
    }
}
