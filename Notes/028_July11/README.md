### June 11

Programming
---

1. WAP and declare an array named age and store age of 10 students and display the greatest.

```c
#include <stdio.h>

int main() {
    int n=10;
    double arr[10];

    for (int i = 0; i < n; ++i) {
        printf("Enter age of %d student: ", i + 1);
        scanf("%lf", &arr[i]);
    }

    for (int i = 1; i < n; ++i) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }

    printf("Largest element = %.lf", arr[0]);

    return 0;
}
```