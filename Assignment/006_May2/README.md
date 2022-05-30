## May 2

## Programming

#### 1. Wap to input any positive number and check of it it positive, negative or neutral

```c
#include <stdio.h>

int main() {
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    if ( number < 0) {
        printf("%d is a negative number!", number);
    } else if( number > 0) {
        printf("%d is positive number!", number);
    } else {
        printf("%d is Neutral Number!", number);
    }

    return 0;
}
```


#### 2. Wap to input any three number and find the greatest number

```c
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter any three number: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            printf("%d is the greatest number!", a);
        } else {
            printf("%d is the greatest number!", c);
        }
    } else if (b > c) {
        printf("%d is the greatest number!", b);
    } else {
        printf("%d is the greatest number!", c);
    }
    return 0;
}
```

## ICT

#### Class nai bhayena!