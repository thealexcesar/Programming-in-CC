#include <stdio.h>
/**
 * Computes the average of a set of grades.
 * @param failCount counting the number of failing test grades.
 */
int main(void)
{
    int numGrades, i, grade,
    gradeTotal = 0, failCount = 0;
    float average;

    printf("How grades will you be entering ?");
    scanf("%i", &numGrades);

    for (i = 1; i <= numGrades; i++) {
        printf("Enter grade #%i: ", i);
        scanf("%i", &grade);
        gradeTotal += grade;

        if (grade < 65)
            failCount++;
    }
    average = (float) gradeTotal / numGrades;

    printf("\nGrade average = %i\n", grade);
    printf("Number of failures = %i\n", failCount);
}