#include <stdio.h>

int main()
{
    int sales[4][5];
    int i, j, SalesmanTotal[4], ProductTotal[5], highest=0; 
    float bonus=0, finalAmount=0;

    for (i=0; i<4; i++)
    {
        printf("Enter sales for Salesman %d:\n", i+1);

        for (j=0; j<5; j++)
        {
            printf("Product %d: \n", j+1);
            scanf("%d", &sales[i][j]);

            if (sales[i][j] < 0)
            {
                printf("Invalid input. enter a value again\n");
                j--;
            }
        }
    }

    printf("\n");
    for (i=0; i<4; i++)
    {
        SalesmanTotal[i] = 0;

        for (j=0; j<5; j++)
        {
            SalesmanTotal[i] = SalesmanTotal[i] + sales[i][j];
        }

        printf("Salesman %d: Rs. %d\n", i+1, SalesmanTotal[i]);
    }

    printf("\n");
    for (j=0; j<5; j++)
    {
        ProductTotal[j] = 0;

        for (i=0; i<4; i++)
        {
            ProductTotal[j] = ProductTotal[j] + sales[i][j];
        }

        printf("Product %d: Rs. %d\n", j+1, ProductTotal[j]);
    }

    for (j=0; j<5; j++)
    {
        if (ProductTotal[j] > ProductTotal[highest])
            highest=j;

    }

    printf("\nHighest revenue Product: Product %d\n", highest + 1);

    printf("Total Revenue: Rs. %d\n\n", ProductTotal[highest]);

    for (i=0; i<4; i++)
    {
        if (SalesmanTotal[i] > 10000)
        {
            bonus = SalesmanTotal[i] * 0.10;
            finalAmount = SalesmanTotal[i] + bonus;

            printf("Salesman %d: Bonus Applied: Rs. %.2f, \n", i+1, bonus);
            printf("Final Amount: Rs. %.2f\n\n", finalAmount);
        }
        else
        {
            finalAmount = SalesmanTotal[i];

            printf("Salesman %d: No Bonus\n", i+1);
            printf("Final Amount: Rs. %.2f\n\n", finalAmount);
        }
    }

    return 0;
}