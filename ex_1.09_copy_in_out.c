#include <stdio.h>
/* let's count the lines in input */
int main()
{
    int c, flag = 0;

    while ((c = getchar()) != EOF)
        if (c == ' ')
        {
            flag = 1;
        }
        else if (flag)
        {
            flag = 0;
            putchar(' ');
            putchar(c);
        }
        else 
            putchar(c);
}
