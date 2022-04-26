## April 25th 

#### Sequential control structure 
 all statements gets executed in the order they are written

#### Selective / condition structure
In selective control structure a condition is tested on the basis of result the statements are executed

### Types: 
1. If statement
1. if...else.. statement
1. If.. elseif.. else... statement
1. Nested if...else...if
1. Switch case statement
1. Conditional statement/ ternary statement/ Operator

if statement: if statement checks the condition and execute statements only if the condition is true. Otherwise, statement will be skipped.

``` c
int main() {
    if (condition) {
        statement;
    }
}
```

### Assignment ( if statement )

#### 1. WAP to enter the percentage and check if you got distinction!

```c 
#include <stdio.h>

int main () {
  float percentage;

  printf("Enter your percentage: ");
  scanf("%f", &percentage);

  if ( percentage >= 80 ) {
    printf("You got distinction!");
  } else if ( percentage < 40 ) {
    printf("You failed the exam! ");
  } else {
    printf("You didn't got distinction! ");
  }
  
  return 0;
}
```

#### 2. Wap to enter age and check of you are eligible to get elderly allowance

```c 
#include <stdio.h>

int main () {
  int age;

  printf("Enter your age: ");
  scanf("%d", &age);

  if ( age > 70 ) {
    printf("Your are eligible for elderly allowance!");
  } else {
    printf("Your are not eligible for elderly allowance!");
  }

  return 0;
}
```

#### 3. WAP to enter a number and check if its even!

```c 
#include <stdio.h>

int main () {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if ( number % 2 ) {
    printf("%d is an odd number!", number);
  } else {
    printf("%d is an even number!", number);
  }

  return 0;
}
```

#### 4. A Rider is riding at 85 km/hr. WAP to check if he is breaking the traffic rules. (Max speed limit: 50 km/hr).

```c 
#include <stdio.h>

int main () {
  const int speedLimit = 50;
  int currentSpeed;

  printf("Enter the speed of the rider: ");
  scanf("%d", &currentSpeed);

  if ( currentSpeed > speedLimit ) {
    printf("Rider is breaking the traffic rules!");
  } else {
    printf("Rider is following the traffic rules! ");
  }

  return 0;
}
```