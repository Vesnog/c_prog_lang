#include <stdio.h>
#define MAXLINE 1000  /* maximum input line size */

int getlines(char line[], char reverse_line[], int maxline);

/* strip the input from trailing space, tabs and empty lines */
int main()
{
    int len;  /* current line length */
    int threshold;  /* maximum length seen so far */
    char line[MAXLINE];  /* current input line */
    char reverse_line[MAXLINE];  /* the reverse line array */

    threshold = 1;
    while ((len = getlines(line, reverse_line, MAXLINE)) > 0)
        if (len > threshold) {
           printf("%s", reverse_line); 
        }
   return 0;
}

/* getlines: read a line into s, return length */     
int getlines(char s[], char r[], int lim)
{
    int c, i, j = 0;

    for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c !='\n'; ++i)
       s[i] = c;
    if (c == '\n') {
        // Starting point is extremely important as i is incremented once
        // Also note that we use j to reference in indexing
        s[i] = c;
        if (i != 0)
        {
            for (j = 0; j < i; ++j)
                r[j] = s[i-j-1];
        }
        r[j] = c;
        ++j;
    }
    r[j] = '\0';
    return j;
}
