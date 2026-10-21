#include <stdio.h>
int main()
{
    int booking[10][4];
    int i, j, seats, row, col, flag=1, fullyBookedRows=0, count;

    for (i=0; i<10; i++)
    {
        for (j=0; j<4; j++)
        {
            booking[i][j] = 0;
        }
    }

    while(flag==1)
    {
        printf("enter the number of seats you want to reserve: ");
        scanf("%d", &seats);

        if (seats<1 || seats>40)
        {
            printf("Invalid input. Enter a number between 1 and 40\n");
            continue;
        }

        while (seats>0)
        {
            printf("enter the row number (1-10): ");
            scanf("%d", &row);

            if (row<1 || row>10)
            {
                printf("Invalid input. Enter a number between 1 and 10\n");
                continue;
            }

            printf("enter the seat number (1-4): ");
            scanf("%d", &col);

            if (col<1 || col>4)
            {
                printf("Invalid input. Enter a number between 1 and 4\n");
                continue;
            }

            if (booking[row-1][col-1] == 0)
            {
                booking[row-1][col-1] = 1;
                seats--;
                printf("Seat reserved at row %d, seat %d\n", row, col);
            }
            else
                printf("Seat already booked. Please choose another seat\n");
    
        }

        printf("Do you want to reserve more seats? (1. Yes, 0.No): ");
        scanf("%d", &flag);

        while (flag != 1 && flag != 0)
        {
            printf("Invalid input. Please enter 1 for Yes or 0 for No\n");
            scanf("%d", &flag);
        }
    }

    printf("\n");
    
    for (j=0; j<4; j++)
    {
        printf("\t");
        printf("%d", j+1);
    }

    printf("\n");
    for (i=0; i<10; i++)
    {
        printf("R%d\t", i+1);
        for (j=0; j<4; j++)
        {
            if (booking[i][j] == 1)
                printf("1\t");
            else
                printf("0\t");
        }
        printf("\n\n");
    }

    for (i=0; i<10; i++)
    {
        count=0;
        for (j=0; j<4; j++)
        {
            if (booking[i][j] == 1)
            {
                count++;
            }
        }
        if (count == 4)
        {
            fullyBookedRows++;
            printf("Row %d is fully booked\n", i+1);
        }
        else
            printf("Row %d is not fully booked\n", i+1);

    }      

    printf("Total number of fully booked rows: %d\n", fullyBookedRows);

    return 0;
}