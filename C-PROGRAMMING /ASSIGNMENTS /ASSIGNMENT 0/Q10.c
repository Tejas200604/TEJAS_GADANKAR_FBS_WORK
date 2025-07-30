//Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.

#include <stdio.h>
int main() {
    int maths, science, english, hindi, marathi;
    int totalmarks;                // Should be int, not double
    float percentage;

    printf("Enter marks in 5 subjects: ");
    scanf("%d %d %d %d %d", &maths, &science, &english, &hindi, &marathi);

    totalmarks = maths + science + english + hindi + marathi;
    printf("Total Marks = %d\n", totalmarks);

    percentage = (totalmarks / 5.0);  // Use 5.0 to ensure float division
    printf("Percentage = %.2f\n", percentage);

    return 0;
}


