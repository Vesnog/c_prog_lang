#include <stdio.h>
/* let's count the lines in input */
int main()
{
    int c, n1, n2, n3;

    n1 = 0;
    n2 = 0;
    n3 = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++n1;
        else if (c == '\t')
            ++n2;
        else if (c == ' ')
            ++n3;
    printf("There are %d new lines %d tabs and %d spaces\n", n1, n2, n3);
}
