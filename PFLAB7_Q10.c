#include <stdio.h>

int main()
{
    int classes, students, subjects, marks, total, i, j, k, failed, classTotal, totalStudents=0, schoolTotal=0;
    float avg, classAvg, schoolAvg;

    printf("enter the number of classes in the school: ");
    scanf("%d", &classes);

    if (classes<=0)
    {
        printf("invalid input");
        return 0;
    }

    for (i=1; i<=classes; i++)
    {
        classTotal=0; 

        printf("enter the number of students in Class %d: ", i);
        scanf("%d", &students );

        if (students<=0)
        {
            printf("invalid input");
            return 0;
        }

        for (j=1; j<=students; j++)
        {
            printf("enter the number of subjects the student %d has studied: ", j);
            scanf("%d", &subjects);

            total=0;
            failed=0;

            printf("Student %d: \n", j);
            for (k=1; k<=subjects; k++)
            {
                printf("Subject %d marks: ", k);
                scanf("%d", &marks);

                total = total+marks;

                if (marks<40)
                    failed=1;
            
            }

            avg = (float) total/subjects;

            if (failed == 1)
                printf("\nClass %d, Student %d: Total Marks = %d, Average = %.2f, Result = Fail\n", i, j, total, avg);
            else
                printf("\nClass %d, Student %d: Total Marks = %d, Average = %.2f, Result = Pass\n", i, j, total, avg);

            classTotal = classTotal + total;
            totalStudents = totalStudents + 1;
        }

        classAvg = (float) classTotal/students;

        printf("\nTotal marks of Class %d = %d\n", i, classTotal);
        printf("Class Average = %.2f\n", classAvg);

        schoolTotal = schoolTotal + classTotal;
    }

    schoolAvg = (float) schoolTotal/totalStudents;

    printf("\nTotal marks across all classes = %d\n", schoolTotal);
    printf("Overall School Average = %.2f\n", schoolAvg);

    return 0;
}