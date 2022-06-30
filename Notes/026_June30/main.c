#include <stdio.h>
int checkPalindrome(int);

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    checkPalindrome(n);

    return 0;
}

int checkPalindrome(int n) {
    int reversed = 0, remainder, original;

    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome", original);
    else
        printf("%d is not a palindrome", original);

    return 0;
}