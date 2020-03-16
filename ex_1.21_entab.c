#include <stdio.h>
#define TABSTOP 4 /* this is the number of tab stops */

/* This program replaces tab stops with the appropriate number of spaces */
int main()
{
    int c, i, j, k, cts = 0, store=0, offset=0, num_tab=0, in_blank =0;
    
    for (i = 1; (c=getchar()) != EOF; ++i)
    {
        // Handle the case for tabs here note that the indices are 0 based in C
        if ((c == ' ') && (!in_blank))
        {
            ++cts; // Increment a counter to keep track of how many spaces encountered
            in_blank = 1;
        }
        else if ((c == ' ') && (in_blank))
            ++cts;
        else
        {
            if (cts != 0)
            {
                // Being here means we encountered a blank before
                offset = (cts + store) % TABSTOP;
                num_tab = (cts + store) / TABSTOP;
                /*printf("\nThe offset is %d, the numtab is %d and the cts is %d and store is %d\n", offset, num_tab, cts, store);*/
                for (j = 0; j < num_tab; ++j)
                    putchar('\t');
                for (k = 0; k < offset - store; ++k)
                    putchar('*');
                cts = 0;
                in_blank = 0;
            }
            if (c != '\n')
            {
                store = i;
                putchar(c);
            }
            if (c == '\n')
            {
                i = 0;
                putchar('N');
                putchar(c);
            }
            else if ( c == '\t')
                i = 0;
            // Deserves a comment: For loop increases the loop variable afterwards
            // Just before the next iteration of the for loop
        }
    }
    return 0;
}

