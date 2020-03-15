#include <stdio.h>
#define TABSTOP 4 /* this is the number of tab stops */

/* This program replaces tab stops with the appropriate number of spaces */
int main()
{
    int c, i, j, k, l, cts = 1, store=0, offset=0, num_tab=0, in_blank = 0; 

for (i = 0; i (c=getchar()) != EOF; ++i)
{
        // Handle the case for tabs here note that the indices are 0 based in C
        if ((c == ' ') && (!in_blank))
        {
            store = i;  // Store the value that the blank starts
            in_blank = 1; // A blank has been encountered
        }
        else if ((c == ' ') && (in_blank))
           ++cts; // Increment a counter to keep track of how many spaces encountered
        else
        {
            if (store != 0)
            {
                // Being here means we encountered a blank before
               in_blank = 0;
                offset =  TABSTOP - (store % TABSTOP);
                num_tab = cts / TABSTOP;
                for (j = 0; j < num_tab; ++j)
                    putchar('\t');
                for (k = 0; k < offset; ++k)
                    putchar('*');
                store = 0;
            }
            putchar(c);
        }
    }
    if (c == '\n')
    {
        // Starting point is extremely important as i is incremented once
        if (store != 0)
        {
                // Being here means we encountered a blank before
                offset =  (store % TABSTOP);
                num_tab = store / TABSTOP;
                for (j = 0; j < num_tab; ++j)
                    putchar('\t');
                for (k = 0; k < offset; ++k)
                    putchar('*');
                store = 0;
        }
       putchar(c); 
    }
    return 0;
}

