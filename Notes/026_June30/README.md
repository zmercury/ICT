### June 30

Programming
-

1. Wap to enter an integer and display in reverse order.

```c
#include <stdio.h>
int reverse(int);

int main() {
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    printf("The reverse is %d\n", reverse(number));

    return 0;
}

int reverse(int number) {
    int m,sum=0;
    while(number>0) {    
        m=number%10;   
        sum=sum*10+m;     
        number=number/10;    
    }
    return sum;
}
```

2. Wap to enter any number and display it factor

```c
#include <stdio.h>
int factors(int);

int main() {
    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    factors(number);

    return 0;
}

int factors(int number) {
    for (int i = 1; i <= number; i++) {
        if(number%i==0) {
            printf("%d ", i);
        }
    }
    return 0;
}
```

3. WAp to find if a number is prime or composite

```c
#include <stdio.h>
int isPrimeComposite(int);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    isPrimeComposite(number);

    return 0;
}

int isPrimeComposite(int number) {
    int count = 0;

    for (int i = 1; 1 <= number; i++) {
        if(number % i == 0) {
            count++;
        }
    }

    if(count == 2) {
        printf("Prime!");
    } else {
        printf("Composite!");
    }

    return 0;
}
```


### Assignment

1. Wap to enter any number and check if it is armstrong or not

```c
#include <stdio.h>
int checkArmstrong(int);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    checkArmstrong(num);

    return 0;
}

int checkArmstrong(int num) {
    int originalNum, remainder, result = 0;

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
       result += remainder * remainder * remainder;
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);

    return 0;
}
```

2. Wap to enter any number and display sum of its digits 
3. Wap to entar any number and check if it is palindrome or not





