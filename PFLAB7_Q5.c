#include <stdio.h>

int main()
{
    int marks[2][3][3], total[2][3];
    int i, j, k, topper, class, student;

    for (i=0; i<2; i++)
    {
        printf("\nenter marks for class %d: \n", i+1);

        for (j=0; j<3; j++)
        {
            printf("\nenter marks for student %d: \n", j+1);

            for (k=0; k<3; k++)
            {
                printf("Subject %d: ", k+1);
                scanf("%d", &marks[i][j][k]);
            }
        }
    }

    for (i=0; i<2; i++)
    {
        printf("\n");
        for (j=0; j<3; j++)
        {
            total[i][j]=0;

            for (k=0; k<3; k++)
            {
                total[i][j] = total[i][j] + marks[i][j][k];
            }

            printf("Class %d Student %d: %d marks\n", i+1, j+1, total[i][j]);
        }
    }

    printf("\n");
    for (i=0; i<2; i++)
    {
        topper=0;
        for (j=1; j<3; j++)
        {
            if (total[i][j] > total[i][topper])
            {
                topper=j;
            }
        }

        printf("Topper of class %d: Student %d: %d marks\n", i+1, topper+1, total[i][topper]);
    }

    class=0;
    student=0;

    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            if (total[i][j] > total[class][student])
            {
                class=i;
                student=j;
            }
        }
    }

    printf("\n");
    printf("Overall Topper: Class %d: Student %d: %d marks\n", class+1, student+1, total[class][student]);

    return 0;
}