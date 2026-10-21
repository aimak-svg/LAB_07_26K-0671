#include <stdio.h>

int main()
{
    float temp[3][3][3];
    int i, j, k, hottest, x=0, y=0, z=0;
    float sum, avg[3], maxTemp;

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            for (k=0; k<3; k++)
            {
                printf("Enter temperature for [%d][%d][%d]: ", i+1, j+1, k+1);
                scanf("%f", &temp[i][j][k]);
            }
        }
    }

    for (i=0; i<3; i++)
    {
        sum=0;

        for (j=0; j<3; j++)
        {
            for (k=0; k<3; k++)
            {
                sum = sum + temp[i][j][k];
            }
        }

        avg[i] = sum/9;

        printf("\nAverage temperature of Layer %d: %.2f Celcius\n", i+1, avg[i]);
    }

    hottest=0;
    for (i=1; i<3; i++)
    {
        if (avg[i] > avg[hottest])
        {
            hottest=i;
        }
    }
    printf("\nHottest Layer: %d\n", hottest+1);
    printf("Average Temperature: %.2f C\n", avg[hottest]);

    maxTemp = temp[0][0][0];

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            for (k=0; k<3; k++)
            {
                if (temp[i][j][k] > maxTemp)
                {
                    maxTemp = temp[i][j][k];
                    x=i;
                    y=j;
                    z=k;
                }
            }
        }
    }
    printf("\nMaximum Temperature: %.2f Celcius\n", maxTemp);
    printf("Coordinates: [%d][%d][%d]\n", x+1, y+1, z+1);

    return 0;
}