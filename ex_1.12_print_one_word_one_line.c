#include <stdio.h>

#define IN 1 //inside a word
#define OUT 0 //outside a word

// print one word per line 
int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if ((c == ' ' || c == '\n' || c == '\t') && state)
        {
            state = OUT;
            putchar('\n');
        }
        else if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT || state == IN) {
            state = IN;
            putchar(c); 
        }
    }
}
