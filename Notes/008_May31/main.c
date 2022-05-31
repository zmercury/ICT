#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if ( num == 0) {
        printf("%d is neutral number!", num);
    } else if (num % 2 == 0) {
        printf("%d is even number!", num);
    } else {
        printf("%d is an odd number!", num);
    }
    return 0;
}