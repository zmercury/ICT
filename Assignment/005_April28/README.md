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

#### 1. Wap to input the percentage and check if you got
``` md 
distinction
first division
second division
third division
failed
```

``` c
#include <stdio.h>

int main() {
    float percentage;

    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    if(percentage >= 80 && percentage <=100) {
        printf("You got distinction!");
    } else if (percentage >=60 && percentage < 80) {
        printf("You got first division!");
    } else if (percentage >= 40 && percentage < 60) {
        printf("You got second division!");
    } else if (percentage >= 30 && percentage < 40) {
        printf("You got third division!");
    } else if (percentage > 100 ) {
        printf("Percentage cannot be above 100!");
    } else {
        printf("You failed the exam!");
    }
    
    return 0;
}
```

#### 2. WAP to input temprature and check if it is as given below:

| Criteria | Result |
| ---------| --------|
| Temprature >=45| Very Hot|
|Temprature >=30 | Hot |
| Temprature >=15 | Mild |
|Temprature > 15 | cold|

```c
#include <stdio.h>

int main() {
    float temprature;

    printf("Enter the temprature of the day: ");
    scanf("%f", &temprature);

    if ( temprature >= 45 ) {
        printf("Very Hot!");
    } else if( temprature >= 30) {
        printf("Hot!");
    } else if ( temprature >= 15) {
        printf("Mild!");
    } else if ( temprature > 15) {
        printf("Cold!");
    } else {
        printf("Error!");
    }

    return 0;
}
```