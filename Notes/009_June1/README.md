### June 1

## Loop/Iterative Structure

Loop is the process of repeatedly executing some block of code until the given condition satisfies. Loop reduce the length of program  Different types od loops in c program are:

1. for loop 
1. while loop
1. do while.. loop 

### For loop

For loop is the entry control loop. It uses the *for* keyword and the initializarion od veriable, condition and increment/decrement statements are written in same line.

#### Syntax

``` c
for (initialization; condition; increment/decrement) {
    body of loop;
}
```

#### Example of the loop

``` c 
//Program to display my college name 10 times

#include <stdio.h>

int main() {

    for (int i = 1; i <= 10; i++) {
        printf("%d. Sano Thimi Campus!\n", i);
    }

    return 0;
}
```

### Assignment


```c
//1. Write a program to display your name 5 times

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("Nikhil\n");
    }
    return 0;
}
```

```c
//2. Write a program to enter a number and display if it is exactly divisible bt 20 or not

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 20 == 0) {
        printf("The number is exaclty divisible by 20!");
    } else {
        printf("The number is not exaclty divisible by 20!");
    }

    return 0;
}
```

```c
//3. Write a program to enter two numbers and display the greatest one

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter any two number: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("%d is greater than %d", num1, num2);
    } else {
        printf("%d is greater than %d", num2, num1);
    }

    return 0;
}
```

4. Define loop? Define for loop with syntax
> Loop is the process of repeatedly executing some block of code until the given condition satisfies.

5. Differenciate between if... else if...... and switch case statements

| if statement | if else statement | switch statement |
| ------------ | ----------------- | ---------------- |
| An if statement is a programming conditional statement that, if proved true, performs a function or displays information. | Else if statements is the programming conditional statement that comes after if statement which performs function if it is proved to be true | A switch statement is a type of selection control mechanism used to allow the value of a variable or expression to change the control flow of program execution via search and map. |
|If statement doesnot require a choice to perform a tast | Else If statement doesnot require a case to perform a tast | Switch Statement requires a choice to operate |
