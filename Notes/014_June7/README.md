#### June 7

## ICT

For question 👉[Click Here](https://github.com/zmercury/ICT/tree/main/Notes/014_June7/Questions%20(Microsoft%20Word))👈
For Offer Letter Assignment 👉[Click Here](https://github.com/zmercury/ICT/tree/main/Notes/014_June7/Offer%20Letter%20(MS%20Word))👈

## Programming

1. Wap to display sum of all numbers from 1 to 10.

``` c
#include <stdio.h>

int main() {
    int sum = 0, i;
    for (i = 1; i <= 10; i++) {
        sum = sum + i;
    }
    printf("The sum of all numbers from 1 to 10 is %d\n", sum);
    return 0;
}
```

2. Wap to find the sum of all the even numbers from 10 to 20
```c
#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 10; i <= 20; i++) {
        if(i%2==0) {
            sum = sum + i;
        }
    }
    printf("The sum of all even numbers from 10 to 20 is %d\n", sum);
    return 0;
}
```

3. Wap to find the sum of all the odd numbers from 10 to 20

``` c
#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 10; i <= 20; i++) {
        if(i%2!=0) {
            sum = sum + i; 
        }
    } 
    printf("The sum of all even numbers is %d\n", sum);
    return 0;
}
```

4. Wap to enter any number and display its multiplication table

```c
#include <stdio.h>

int main() {
    int number,i,mul;

    printf("Enter any number: ");
    scanf("%d", &number);

    for (i = 1; i <= 10; i++) {
        mul = i * number;
        printf("%d x %d = %d\n", number, i, mul);
    }
    return 0;
}
```

5. Wap to find the sum of all odd and even numbers from 10 to 20

```c
#include <stdio.h>

int main() {
    int sumOfEven = 0;
    int sumOfOdd = 0;

    for (int i = 10; i <= 20; i++) {
        if(i%2==0) {
            sumOfEven = sumOfEven + i;
        } else {
            sumOfOdd = sumOfOdd + i;
        }
    }
    
    printf("The sum of all even numbers is %d\n", sumOfEven);
    printf("The sum of all odd numbers is %d\n", sumOfOdd);

    return 0;
}
```