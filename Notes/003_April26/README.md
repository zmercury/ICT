### ICT

Microsoft excel is a spreadsheet tool capable of performing calculation, analyzing data and integration information from different properties.

By, defaultm documents saved in the Excel 2010 are saved with the .xlsx extension whereas the file extention if the prior excel versions are .xls

Excel was orginally code name Odyssey during development. It was first 

> yo part chai incomplete raichha la sathi haru 🤣🤣 kosai sanga chha bhane DM garam!

### Programming


#### Syntax

``` c 
if ( condition) {
    statement....
} else {
    statement....
}
```

#### if....else.... statement

Here, the condition is tested and if condition is true then one hock of code is executed, otherwise another block of code is excuted. 

```c 
#include <stdio.h>

int main() {
    int age;
    printf("Enter the age: ");
    scanf("%d", &age );

    if ( age > 18) {
        printf("You can vote!");
    } else {
        printf("You cannot vote!");
    }
    return 0;
}

```

## Assignment

#### 1. WAP to enter any number and check if its odd or not

```c 
#include <stdio.h>

int main() {
    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    if ( number % 2 ) {
        printf("%d is odd number!", number);
    } else {
        printf("%d is even number!", number);
    }

    return 0;
}
```

#### 2. WAP to enter the age and check if you are eligible to marry or not

```c 
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if ( age < 18 ) {
        printf("You can't marry yet!");
    } else {
        printf("You can marry!");
    }

    return 0;
}
```

#### 3. WAP to enter the number and check if it is exactly divisible by 5 or not

```c 
#include <stdio.h>

int main() {
    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    if ( number % 5 ) {
        printf("%d is not divisible by 5!", number);
    } else {
        printf("%d is divisible by 5!", number);
    }

    return 0;
}
```

#### 4. WAP to enter any two numbers and find the greatest number

```c
#include <stdio.h>

int main() {
    int numberOne, numberTwo;

    printf("Enter any two number: ");
    scanf("%d %d", &numberOne, &numberTwo);

    if ( numberOne > numberTwo ) {
        printf("%d is greater than %d", numberOne, numberTwo);
    } else {
        printf("%d is greater than %d", numberTwo, numberOne);
    }

    return 0;
}
```

#### 5. WAP to enter the height of two person and find if they are equal or not

```c
#include <stdio.h>

int main() {
    int heightOne, heightTwo;

    printf("Enter any two number: ");
    scanf("%d %d", &heightOne, &heightTwo);

    if ( heightOne == heightTwo ) {
        printf("Both heights are equal!");
    } else {
        printf("Heights are unequal!");
    }

    return 0;
}
```

#### 6. WAP to enter a number and find if it is exactly divisible by 2 and 4 or not

```c
#include <stdio.h>

int main() {
    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    if ( number % 2 && number % 4 ) {
        printf("%d is not divisible by 2 and 4!", number);
    } else {
        printf("%d is divisible by both 2 and 4!", number);
    }

    return 0;
}
```





