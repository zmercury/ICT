### June 27

Programming
-

1. WAP to find the average of three number using user defined function

``` c
#include <stdio.h>
int average(int, int, int);

int main() {
    int a, b, c;
    printf("Enter any three number: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("The average is %d", average(a,b,c));

    return 0;
}

int average(int a, int b, int c) {
    return (a + b + c) / 3;
}
```