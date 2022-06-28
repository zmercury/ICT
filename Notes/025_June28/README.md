### June 28

Programming 
-

``` c
#include <stdio.h>
int isDivisible(int);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    isDivisible(number);

    return 0;
}

int isDivisible(int number) {
    if(number % 10 == 0 && number % 20 == 0) {
        printf("It is divisible by 10 and 20!");
    } else {
        printf("It is not divisible by 10 and 20!");
    }
    return 0;
}
```