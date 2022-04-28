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

| Criteria | Result |
| ---------| --------|
| Percentage > 80| Distinction|
| Percentage > 60 | First Division |
| Percentage > 40 | Third Division |
| Percentage < 30 | Failed|

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

#### 3. WAP to input the sales amount and calculate the commission on the basis of given criteria.


| Criteria | Commission |
| ---------| --------|
|Sales Amount >= 500000| 10%|
|Sales Amount >= 300000| 3%|
|Sales Amount >= 100000| 1%|
| Less than 100000 | 0.5% |

``` c
#include <stdio.h>

int main() {
    int salesAmount, commission;

    printf("Enter the sales amount: ");
    scanf("%d", &salesAmount);

    if (salesAmount >= 500000) {
        commission = ((10 / 100) * salesAmount);
    } else if (salesAmount >= 300000 && salesAmount < 500000) {
        commission = ((3 / 100) * salesAmount);
    } else if (salesAmount >= 100000 && salesAmount < 300000) {
        commission = ((1 / 100) * salesAmount);
    } else {
        commission = ((0.5 / 100) * salesAmount);
    }

    printf("The commission amount is %d\n", commission);

    return 0;
}
```