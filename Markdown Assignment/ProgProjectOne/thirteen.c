//Enter two floating-point numbers and display their average

#include <stdio.h>

int main() {
    float a, b, average;

    printf("Enter any two floating number: ");
    scanf("%f %f", &a, &b);

    average = (a + b) / 2;

    printf("The average of %.2f and %.2f is %.2f\n", a, b, average);

    return 0;
}