#### May 30

## Programming


### Switch Case statement 
Switch case statement test ant expression and execites the statement ot case equivalent to the expression. If none f the case meets the expression then default block gets executed.

Syntax: 
``` c
switch (expression) {
    case 1: {
        statement 1;
    }
    case 2: {
        statement 2;
    }
    case n: {
        statement n;
    }
    default: {
        statement;
    }
}
```

Program 

``` c 
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: {
            printf("Sunday!");
            break;
        } 
        case 2: {
            printf("Monday!");
            break;
        }
        case 3: {
            printf("Tuesday!");
            break;
        }
        case 4: {
            printf("Wednesday!");
            break;
        }
        case 5: {
            printf("Thursday!");
            break;
        }
        case 6: {
            printf("Friday!");
            break;
        }
        case 7: {
            printf("Saturday!");
            break;
        }
        default: {
            break;
        }
    }
    return 0;
}
```