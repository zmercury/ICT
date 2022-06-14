### June 14

## Programming

1. Wap to input any number and check if it is prime or composite.

```c
#include <stdio.h>

int main() {
    int number,inc,i;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        if(number%i==0) {
            inc = inc + 1;
        }
    }
    if(inc == 2) {
        printf("%d is prime number!", number);
    } else {
        printf("%d is composite number!", number);
    }

    return 0;
} 
```