#include <stdio.h>

/* copy input to output; 1st version */
main()
{
    int c;

    c = getchar();
    while (c != EOF) {
        // test whether c is EOF (should print 0)
        if (c == EOF) 
            putchar('1');
        else 
            putchar('0');
        
        c = getchar();
    }
    
    // test whether c is EOF (should print 1)
    if (c == EOF) 
        putchar('1');
    else 
        putchar('0');
     

}
