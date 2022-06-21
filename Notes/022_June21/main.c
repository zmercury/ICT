// Wap to enter any number and check if it it even or odd using function

#include <stdio.h>
int checkOddEven(int);

int main() {
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    checkOddEven(number);
    return 0;
}

int checkOddEven(int number) {
    if(number%2==0) {
        printf("%d is even number", number);
    } else {
        printf("%d is odd number", number);
    }
}