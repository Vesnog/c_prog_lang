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
       s[i] = c;
    if (c == '\n') {
        for (j = i; (s[i] == ' ' || s[i] == '\t'); --j)
            ;
        s[j] = c;
        ++j;
    }
    s[j] = '\0';
    return j;
}

