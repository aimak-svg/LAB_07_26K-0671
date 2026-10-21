#include <stdio.h>

int main()
{
    int i, j, count, num, times;
    char letter;

    count=4;
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            if (count>j)
                printf("  ");
            else
                printf("* ");
        }

        printf("\t|\t");
        num=1;

        for (j=0; j<5; j++)
        {
            if (count>j)
                printf("  ");
            else
            {
                printf("%d ", num);
                num++;
            }
        }

        printf("\t|\t");
        letter='A';

        for (j=0; j<5; j++)
        {
            if (count>j)
                printf("  ");
            else
            {
                printf("%c ", letter);
                letter++;
            }
        }
        printf("\n");
        count--;
    }

    printf("\n\n");

    for (i=0; i<5; i++)
    {
        for (j=0; j<4-i; j++)
        {
            printf("  ");
        }

        for (j=0; j<(i*2)+1; j++)
        {
            printf("* ");
        }

        for (j=0; j<4-i; j++)
        {
            printf("  ");
        }

        printf("\t|\t");
        num=1;

        for (j=0; j<4-i; j++)
        {
            printf("  ");
        }

        for (j=0; j<(i*2)+1; j++)
        {
            printf("%d ", num);
            num++;
        }

        for (j=0; j<4-i; j++)
        {
            printf("  ");
        }
        
        printf("\t|\t");
        letter='A';

        for (j=0; j<4-i; j++)
        {
            printf("  ");
        }

        for (j=0; j<(i*2)+1; j++)
        {
            printf("%c ", letter);
            letter++;
        }

        for (j=0; j<4-i; j++)
        {
            printf("  ");
        }
        
        printf("\t|\t");
        printf("\n");
    }

    return 0;
}