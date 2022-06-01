### May 31


## Programming

``` c
// input 3 number from user and find the greatest one! (Biraj Lamichhane)

#include <stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter a, b and c \t");
    scanf(" %d %d %d", &a, &b, &c);
    if(a>b){
        if(a>c){
            printf("%d is the greatest number", a);
        } else {
            printf("%d is the greatest number",c);
        }
    } else {
        if (b>c) {
            printf("%d is the greatest number",b);
        } else {
            printf("%d is the greatest number",c);
        } 
    }
    
    return 0;
}

```



``` c
//Wap to input a number and find if it is perfectly divisible by 10

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 10 == 0) {
        printf("%d is perfectly divisible by 10!", number);
    } else {
        printf("%d is not perfectly divisible by 10!", number);
    }
    return 0;
}
```

```c
//Wap to enter a number and check if it is even odd or neutral.
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
```

``` c
//Wap to enter three number and display their average

#include <stdio.h>

int main() {
    int a, b, c, average;

    printf("Enter any three number: ");
    scanf("%d %d %d", &a, &b, &c);

    average = (a + b + c) / 2;

    printf("The average is %d", average);

    return 0;
}
```

```c
//Wap to enter two number and find their sum, difference and multiplication using switch!

#include <stdio.h>

int main() {
    int choice, a, b;

    printf("Enter any 2 numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter 1 for addition!\n");
    printf("Enter 2 for substraction\n");
    printf("Enter 3 for multiplication\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            printf("Sum = %d", a + b);
            break;
        }
        case 2: {
            if (a>b) {
                printf("Differences: %d", a - b);
            } else {
                printf("Differences: %d", b - a);
            }
            break;
        }
        case 3: {
            printf("Multiplication: %d", a * b);
        }
            break;
    }
    return 0;
}
```