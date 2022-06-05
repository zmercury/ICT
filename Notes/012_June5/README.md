#### 5th June

### ICT

#### Do While loop:

Do while loop is the post test loop which checks the condition while exiting from the loop. it uses do... while keywords. The do... while loop is terminated with semicolon.

Syntax:

```c
initialization;
do {
    Body of loop,
    increment/decrement;
} while(condition);
```

> Note: The do... while executes at lease once if condition is false at beginning of loop. 

Although the condition is not true, the loop runs once because it is a post test loop! It checks the loop at first and runs it before realizing that the condition is wrong!

## Assignment


1. Write a program to display your name 5times using do... while loop

```c
#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("%d. Jupiter\n", i);
        i++;
    } while (i <= 5);

    return 0;
};
```

2. Write a program to print first 10 natural number using do while loop

```c
#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
};
```

3. Wap to print all number between 1 to 100 using do while loop

```c
#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 100);

    return 0;
};
```

4. Wap to print all even number between 1 to 100 using do while

```c
#include <stdio.h>

int main() {
    int i = 1;

    do {
        if(i%2==0) {
            printf("%d\n", i);
        }
        i++;
    } while (i <= 100);

    return 0;
};
```

5. Wap to display all numbers between 1000 and 900.

```c
#include <stdio.h>

int main() {
    int i = 1000;

    do {
        printf("%d\n", i);
        i--;
    } while (i >= 900);

    return 0;
};
```

