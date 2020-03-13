#include <stdio.h>
#define TABSTOP 4 /* this is the number of tab stops */
#define MAXLINE 1000 /* maximum lengths of a line */

/* This program replaces tab stops with the appropriate number of spaces */
int main()
{
    int c, i, j, stop_loc, cts, store=0;

    for (i = 0, j = 0; i < lim - 1 && (c=getchar()) != EOF && c !='\n'; ++i)
    {
        // Handle the case for tabs here note that the indices are 0 based in C
        if (c == ' ')
        {
            store++; 
            /*printf("Blank encountered\n");*/
        }
        else
        {
            if (store != 0)
            {
               tabs
            }
            store = 0;
            putchar(c);
        }
    }
    if (c == '\n')
    {
        // Starting point is extremely important as i is incremented once
        if (store != 0)
        {

        }
       putchar(c); 
    }
    return 0;
}

