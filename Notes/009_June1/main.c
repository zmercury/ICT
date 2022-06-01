#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 20 == 0) {
        printf("The number is exaclty divisible by 20!");
    } else {
        printf("The number is not exaclty divisible by 20!");
    }

    return 0;
}