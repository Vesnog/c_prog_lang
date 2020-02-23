#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    // Here we assume that the maximum word length is 20
    int c, state, nword, hist[20]; 

    state = OUT;
    nword = 0;
    
    /* This step is really important to set the initial values of the array */
    for (int i = 0; i < 20; ++i)
        hist[i] = 0;

    while ((c = getchar()) != EOF) {
        if ((c == ' ' || c == '\n' || c == '\t') && state)
        {
            state = OUT;
            printf("The word is of length %d ", nword);
            ++hist[nword - 1];
            nword = 0;
        }
        else if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT || state == IN) {
            state = IN;
            ++nword;
        }
    }
    printf("The following is the histogram");
    for (int i = 0 ;i < 20 ;++i)
    {
        printf("Length %d: ", i + 1);
        for (int j = 0; j < hist[i]; ++j)
        {
           printf("*");
           //printf("\n %d %d \n", i, j);
           // printf("Length of hist[i] is %d", hist[i]);
        }
        printf("\n");
    }
    return 0;
}

