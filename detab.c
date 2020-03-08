#include <stdio.h>
#define TABSTOP 4 /* this is the number of tab stops */
#define MAXLINE 1000 /* maximum lengths of a line */

int getlines(char line[], int maxline);

/* This program replaces tab stops with the appropriate number of spaces */
int main()
{
    int len;  /* current line length */
    char line[MAXLINE];  /* current input line */

    while ((len = getlines(line, MAXLINE)) > 0)
       printf("%s", line); 
   return 0;
}

/* getlines: read a line into s, return length */     
int getlines(char s[], int lim)
{
    int c, i, j, stop_loc, cts;

    for (i = 0, j = 0; i < lim - 1 && (c=getchar()) != EOF && c !='\n'; ++i)
    {
        /*printf("%d %d\n", i, j);*/
        // Handle the case for tabs here note that the indices are 0 based in C
        if (c == '\t')
        {
            /*printf("Tab encountered\n");*/
            stop_loc =  TABSTOP - (j % TABSTOP);
            for (cts = 0; cts < stop_loc; ++cts)
            {
                /*printf("The value of i and j is %d, %d\n", i,  j);*/
                s[j++] = ' ';
            }
        }
        else
            s[j++] = c;
    }
    if (c == '\n')
    {
        // Starting point is extremely important as i is incremented once
        // Also note that we use j to reference in indexing
        s[j] = c;
        ++j;
    }
    s[j] = '\0'; 
    return j;
}

