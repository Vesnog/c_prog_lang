#include <stdio.h>
#define MAXLINE 1000  /* maximum input line size */

int getlines(char line[], int maxline);

/* strip the input from trailing space, tabs and empty lines */
int main()
{
    int len;  /* current line length */
    int threshold;  /* maximum length seen so far */
    char line[MAXLINE];  /* current input line */

    threshold = 1;
    while ((len = getlines(line, MAXLINE)) > 0)
        if (len > threshold) {
           printf("%s", line); 
        }
   return 0;
}

/* getlines: read a line into s, return length */     
int getlines(char s[], int lim)
{
    int c, i, j;

    for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c !='\n'; ++i)
    {
       s[i] = c;
       printf("i is equal to %d\n", i);
    }
    if (c == '\n') {
        printf("i and j are %d, %d\n", i, j);
        // Starting point is extremely important as i is incremented once
        // Also note that we use j to reference in indexing
        for (j = i - 1; (s[j] == ' ' || s[j] == '\t'); --j)
        {
            printf("s[j] is %d\n", s[j]);
            printf("s[i] is %d\n", s[i]);
            printf("Encountered blank or tab retreating j is %d\n", j);
        }
        s[j] = c;
        ++j;
    }
    s[j] = '\0';
    return j;
}

