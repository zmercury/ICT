#### June 9

### Programming

1. WAP to enter any number and display its factorial

```c
#include <stdio.h>

int main() {
    int fact=1, i, num;

    printf("Enter any number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fact = fact * i;
    }

    printf("The factorial of %d is %d", num, fact);

    return 0;
}
```

