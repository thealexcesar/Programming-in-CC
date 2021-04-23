#include <stdio.h>

int main(void)
{
    int numGrades, i, grade,
    gradeTotal = 0, failCount = 0;
    float average;

    printf("How grades will you be entering?");
    scanf("%i", &numGrades);

    for (i = 0; i < numGrades; i++) {
        printf("Enter grade #%i: ", i);
        scanf("%i", &grade);
        gradeTotal += grade;

        if (grade < 65)
            failure++;
    }
    average = (float) gradeTotal / numGrades;

    printf("\nGrade average = %.2f\n", grade);
    printf("Number of failures = %i\n", failCount);
}