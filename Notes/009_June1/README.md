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