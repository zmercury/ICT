#include <stdio.h>
int addDigit(int);

int main() {
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = addDigit(n);
    printf("%d\n", result);
    return 0;
}

int addDigit(int n) {
    if (n == 0) {
        return 0;
    }
    return (n%10 + addDigits(n/10));
}