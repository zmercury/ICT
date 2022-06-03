#### June 3

## ICT

### Looping

1. for loop..
1. While loop.. Which loop is also the pre tesr loop where condition is tested befire entering the loop. In while loop initialization, condition and incremenent/decrement are written in different location. It uses the while keyword. 

#### Syntax

```c
while(condition) {
    //body of the loop
    //increment/decrement;
}
```

```c
//Example

#include <stdio.h>

int main() {
    int i = 1;

    while (i<=5) {
        printf(" %d Sanothimi Campus \n", i);
        i++;
    }

    return 0;
}
```

```c
//Print colz name 100 times using loop! - Biraj Lamichhane

#include <stdio.h>

int main() {

    for (int i = 100; i >=1; i--) {
        printf(" %d Sanothimi Campus \n", i);
    }

    return 0;
}
```

```c
//Wap to display all numbers between 1 to 50 using for loop

#include <stdio.h>

int main() {

    for (int i = 1; i <= 50; i++) {
        printf("%d\t", i);
    }
    
    return 0;
}
```


## Assignment

- Write a program to display your name 5times using while loop
- write a program to print first 10 natural number
- Wap to print difference between for & while loop
- Wap to print all number between 1 to 1000.


