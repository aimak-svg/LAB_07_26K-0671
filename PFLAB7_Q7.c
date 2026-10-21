#include <stdio.h>

int main()
{
    int i, j;

    for (i=1; i<=5; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\nreversed: \n\n");
    for (i=5; i>=1; i--)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\nmultiplication:\n\n");
    for (i=1; i<=5; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d\t", i*j);
        }
        printf("\n");
    }

    return 0;
}