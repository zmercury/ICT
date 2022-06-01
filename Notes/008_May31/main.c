//Wap to enter two number and find their sum, difference and multiplication using switch!

#include <stdio.h>

int main() {
    int choice, a, b;

    printf("Enter any 2 numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter 1 for addition!\n");
    printf("Enter 2 for substraction\n");
    printf("Enter 3 for multiplication\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            printf("Sum = %d", a + b);
            break;
        }
        case 2: {
            if (a>b) {
                printf("Differences: %d", a - b);
            } else {
                printf("Differences: %d", b - a);
            }
            break;
        }
        case 3: {
            printf("Multiplication: %d", a * b);
        }
            break;
    }
    return 0;
}