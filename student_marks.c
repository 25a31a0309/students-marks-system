#include <stdio.h>

int main() {
    int n, i;
    float marks[100], total = 0, average;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    // Input marks
    for(i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    // Calculate average
    average = total / n;

    // Display results
    printf("\nTotal Marks = %.2f", total);
    printf("\nAverage = %.2f", average);

    // Grade calculation
    if(average >= 90)
        printf("\nGrade: A");
    else if(average >= 75)
        printf("\nGrade: B");
    else if(average >= 60)
        printf("\nGrade: C");
    else if(average >= 50)
        printf("\nGrade: D");
    else
        printf("\nGrade: Fail");

    return 0;
}