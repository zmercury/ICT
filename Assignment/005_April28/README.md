## Programming

### if.... else if..... else..... statement 

#### The control structure is used to check one or more conditions and the statements are executed. If the condition gets true, if non of the statements gets true the statement written in else block will be executed. 

#### Syntax: 

``` c
if (condition) {
    statement;
} else if (condition) {
    statement;
} else if (condition_n) {
    statement_n;
} else {
    statement;
}
```

#### 1. Wap to input the percentage and find out what you got in the exam!
``` md 
> conditions
percentage > 80  = distinction
percentage > 60 = first division
percentage > 40 = second division
percentage lower than 40 = failed
```

``` c
#include <stdio.h>

int main() {
    int percentage;

    printf("Enter your percentage: ");
    scanf("%d", &percentage);

    if(percentage >= 80) {
        printf("You got distinction!");
    } else if (percentage >=60) {
        printf("You got first division!");
    } else if (percentage >= 40) {
        printf("You got second division!");
    } else {
        printf("You failed the exam!");
    }
    
    return 0;
}
```