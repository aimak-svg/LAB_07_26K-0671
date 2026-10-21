#include <stdio.h>

int main()
{
    int grid[3][3];
    int i, j, valid=1, value=0, k, l;

    printf("Enter value (1-9 or 0 for empty) for a 3x3 grid:\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Enter value for grid[%d][%d]: ", i, j);
            scanf("%d", &grid[i][j]);
        }
    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if (grid[i][j] < 0 || grid[i][j] > 9)
                valid=0;
    
        }
    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if (grid[i][j] != 0)
            {
                value = grid[i][j];

                for (k=0; k<3; k++)
                {
                    for (l=0; l<3; l++)
                    {
                        if ((k != i || l != j) && grid[k][l] == value)
                            valid=0;
                    }
                }
            }
        }
    }

    if (valid==1)
        printf("Valid Grid\n");
    else
        printf("Invalid Grid\n");

    return 0;
}