#include <stdio.h>

int main()
{
    int departments, employees, i, j, days, salary, bonus, departmentTotal, Total=0;

    printf("Enter number of departments: ");
    scanf("%d", &departments);

    for (i=1; i<=departments; i++)
    {
        printf("\nEnter number of employees in Department %d: ", i);
        scanf("%d", &employees);

        departmentTotal=0;

        for (j=1; j<=employees; j++)
        {
            printf("Enter days worked by Employee %d: ", j);
            scanf("%d", &days);

            if (days<0 || days>31)
            {
                printf("invalid input");
                return 0;
            }

            salary = days*500;
            bonus=0;

            if (days>25)
            {
                bonus=2000;
                salary = salary+bonus;
            }

            printf("Department %d, Employee %d: Days Worked = %d Salary, Rs. %d\n", i, j, days, salary);
            departmentTotal = departmentTotal+salary;
            printf("\n");
        }

        printf("\nTotal salary paid in Department %d:  Rs. %d\n",i, departmentTotal);

        Total = Total+departmentTotal;
    }

    printf("\nTotal salary paid across all departments: Rs. %d\n",Total);

    return 0;
}