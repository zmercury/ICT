//input two numbers and display their sum

#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}