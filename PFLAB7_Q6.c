#include <stdio.h>

int main()
{
    int data[3][3], key[3][3], encrypted[3][3];
    int i, j, max, row=0, col=0;

    printf("Enter the data values:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Enter value for [%d][%d]: ", i+1, j+1);
            scanf("%d", &data[i][j]);
        }
    }

    printf("\nEnter the key values:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Enter value for [%d][%d]: ", i+1, j+1);
            scanf("%d", &key[i][j]);
        }
    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            encrypted[i][j] = (data[i][j] * key[i][j]) + (i+j);
        }
    }

    printf("\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d\t", encrypted[i][j]);
        }
        printf("\n");
    }

    max=encrypted[0][0];

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if (encrypted[i][j] > max)
            {
                max = encrypted[i][j];
                row=i;
                col=j;
            }
        }
    }

    printf("\nMaximum Encrypted Value: %d\n", max);
    printf("Position: (%d, %d)\n", row+1, col+1);

    return 0;
}