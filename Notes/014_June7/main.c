#include <stdio.h>

int main() {
    int number,i,mul;

    printf("Enter any number: ");
    scanf("%d", &number);

    for (i = 1; i <= 10; i++) {
        mul = i * number;
        printf("%d x %d = %d\n", number, i, mul);
    }
    return 0;
}

