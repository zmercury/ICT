#### July 12

Programming
-

### Assignment

1. Wap to enter the salary of 10 employee and display it.

```c
#include <stdio.h>

int main() {
    int salary[10];

    for (int i = 1; i <= 10; i++) {
        printf("Enter %d employee salary: ", i);
        scanf("%d", &salary[i]);
    }

    for (int i = 1; i <= 10; i++) {
        printf("%d\t", salary[i]);
    }

    return 0;
}
```

2. Wap to enter the age of 10 students and display it.

```c
#include <stdio.h>

int main() {
    int age[10];

    for (int i = 1; i <= 10; i++) {
        printf("Enter age of %d student: ", i);
        scanf("%d", &age[i]);
    }

    for (int i = 1; i <= 10; i++) {
        printf("%d\t", age[i]);
    }

    return 0;
}
```

3. Wap to enter the fee of 10 students and display it.

```c
#include <stdio.h>

int main() {
    int fee[10];

    for (int i = 1; i <= 10; i++) {
        printf("Enter fee of %d student: ", i);
        scanf("%d", &fee[i]);
    }

    for (int i = 1; i <= 10; i++) {
        printf("%d\t", fee[i]);
    }

    return 0;
}
```

4. Wap to enter 10 numbers in array and display its sum

```c
#include <stdio.h>

int main() {
    int number[10], sum = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Enter number of %d student: ", i);
        scanf("%d", &number[i]);
    }

    for (int i = 1; i <= 10; i++) {
        sum = sum + number[i];
    }
    
    printf("Sum of all the numbers in array is: %d", sum);

    return 0;
}
```
