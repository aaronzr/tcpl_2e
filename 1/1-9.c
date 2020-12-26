#include <stdio.h>

/* replace multiple blanks with single blank */
main()
{
    int c, prev_was_blank;   
    
    prev_was_blank = 0;
    while ((c = getchar()) != EOF) {
        // copy all chars except blanks following blanks
        if (!(c == ' ' && prev_was_blank)) 
            putchar(c);
        
        prev_was_blank = (c == ' ');
    }
        
}
