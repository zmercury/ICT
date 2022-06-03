#### June 3

## ICT

### Looping

1. for loop..
1. While loop.. Which loop is also the pre tesr loop where condition is tested befire entering the loop. In while loop initialization, condition and incremenent/decrement are written in different location. It uses the while keyword. 

#### Syntax

```c
while(condition) {
    //body of the loop
    increment/decrement;
}
```

```c
//Print colz name 100 times using loop!

#include <stdio.h>

int main() {

    for (int i = 100; i >=1; i--) {
        printf(" %d Sanothimi Campus \n", i);
    }

    return 0;
}
```