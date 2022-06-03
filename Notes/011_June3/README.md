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


1. Write a program to display your name 5times using while loop

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d. Jupiter\n", i);
    }
    return 0;
}
```

2. Write a program to print first 10 natural number

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("%d\t", i);
    }
    return 0;
}
```

3. Wap to print difference between for & while loop

|For Loop|While Loop|
|-|-|
|The 'for' loop used only when we already knew the number of iterations.|The 'while' loop used only when the number of iteration are not exactly known.|
|If the condition is not put up in 'for' loop, then loop iterates infinite times.|If the condition is not put up in 'while' loop, it provides compilation error.|
|	In 'for' loop the initialization once done is never repeated.| In while loop if initialization is done during condition checking, then initialization is done each time the loop iterate.|
|In 'for' loop iteration statement is written at top, hence, executes only after all statements in loop are executed.|In 'while' loop, the iteration statement can be written anywhere in the loop.|

4. Wap to print all number between 1 to 100.

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        printf("%d\t", i);
    }
    return 0;
}
```

5. Wap to print all even number between 1 to 100 using for while

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        printf("%d\t", i);
    }
    return 0;
}
```

6. Wap to display all numbers between 1000 and 900.

```c
#include <stdio.h>

int main() {
    for (int i = 1000; i >= 900; i--) {
        printf("%d\t", i);
    }
    return 0;
}
```