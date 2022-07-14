### July 6

Programming
-

### Recursive Function

The function which call itself is called recursive function

stntax:

```c
int fun1(parameter);

int main() {
    //.....
    fun1(argument);
}

int fun1(parameter) {
    //.....
    fun1(argument);
}
```

---
 
1. wap to find the factorial using recursive function

```c
#include <stdio.h>
int fact(int);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d", fact(n));
    return 0;
}


int fact(int n) {
    if(n==1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
```

### Assignment

#### Theory

1. What is operator? Explain various operators in c.
>   An operator is a symbol which operates on a variable or value. There are types of operators like arithmetic, logical, conditional, relational, bitwise, assignment operators etc.

2. Define loop. Differenciate between while and do while loop.
> Loops in C programming language is a conditional concept used for consecutively executing a line or a block of code over and over again until it reaches the value desired by the programmer. In C programming, there are three types of loops, namely For Loop, While Loop and Do While Loop.

| While Loop | Do While Loop|
| --- | --- |
| Condition is checked first then statement(s) is executed. | Statement(s) is executed atleast once, thereafter condition is checked. |
| It might occur statement(s) is executed zero times, If condition is false. | At least once the statement(s) is executed. |
| No semicolon at the end of while. while(condition) | Semicolon at the end of while. while(condition); |
| If there is a single statement, brackets are not required. | Brackets are always required. |
| Variable in condition is initialized before the execution of loop. | variable may be initialized before or within the loop. |
| while loop is entry controlled loop. | do-while loop is exit controlled loop. |
| while(condition) { statement(s); } | do { statement(s); } while(condition);
 |

3. Describe switch case statement with example.
> Switch statement in C tests the value of a variable and compares it with multiple cases. Once the case match is found, a block of statements associated with that particular case is executed.
example:

```c
switch(choice) {
  case 1: {
    statement;
    break;
  }
  case 2: {
    statement;
    break;
  }
  default: {
    break;
  }
}
```

4. What is conditional structure? Explain C control structure.
> 

5. Define nested loop. Differenciate between break and continue.
6. Define function. Differenciate between user defined and library function.
7. What is recursive function? Describe with example.

#### Program

1. Wap to display the sum of first 10 natural number using recursion

```c
#include <stdio.h>
int addNumbers(int);

int main() {

  int num = 10;
  printf("Sum = %d", addNumbers(num));
  return 0;
}

int addNumbers(int n) {
  if (n != 0) {
    return n + addNumbers(n - 1);
  } else {
    return n;
  }
}

```

2. Enter distance in KM and convert it into meter using function.

```c
#include <stdio.h>
float changeDist(float);

int main() {
  float distKm;

  printf("Enter the value in kilometer: ");
  scanf("%f", &distKm);

  printf("%.2f Meters", changeDist(distKm));

  return 0;
}

float changeDist(float distKm) {
  return distKm * 1000;
}
```

3. Enter base & height of triangle and calculate its area.

```c
#include <stdio.h>
int areaTriangle(int, int);

int main() {
  int base, height;

  printf("Enter the base of the triangle: ");
  scanf("%d", &base);
  printf("Enter the height of the triangle: ");
  scanf("%d", &height);

  printf("Area = %d cm2", areaTriangle(base, height));

  return 0;
}

int areaTriangle(int base, int height) {
  return (1/2 * base * height);
}
```

4. Enter any number and check if its even, odd or neutral.

```c
#include <stdio.h>
int checkOddEven(int);

int main() {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  checkOddEven(number);

  return 0;
}

int checkOddEven(int number) {
  if(number==0) {
    printf("%d is zero!", number);
  } else if(number%2!=0) {
    printf("%d is odd number!", number);
  } else {
    printf("%d is even number!", number);
  }
  return 0;
}
```
5. Wap to display first 50 number using recursive function.

```c
#include<stdio.h>
int  numPrint(int);

int main() {
  int n = 1;
  numPrint(n);
  return 0;
}

int numPrint(int n) {
    if(n<=50) {
      printf(" %d ",n);
      numPrint(n+1);
    }
}
```

6. Wap to enter length, breath and height of room and display its volume using function.

```c
#include <stdio.h>
int volume(int, int, int);

int main() {
  int length, breath, height;

  printf("Enter the length of the room:");
  scanf("%d", &length);
  printf("Enter the breath of the room: ");
  scanf("%d", &breath);
  printf("Enter the height of the room: ");
  scanf("%d", &height);

  printf("The volume of the circle is %d cm3", volume(length, breath, height));

  return 0;
}

int volume (int length, int breath, int height) {
  return length * breath * height;
}

```
