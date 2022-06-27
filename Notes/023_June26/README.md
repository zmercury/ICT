### June 26

## Programming

1. wap to input any number and check if it is positive, negative or neutral 

``` c
#include <stdio.h>
int checkNP(int);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkNP(number);

    return 0;
}

int checkNP (int number) {
    if(number > 0) {
        printf("%d is positive number!", number);
    } else if( number < 0) {
        printf("%d is negative number!", number);
    } else {
        printf("Enter number other than 0!");
    }
}
```
2. wap to input any number and display it in reverse order.

``` c
#include <stdio.h>
int reverse(int);

int main() {
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    reverse(n);

    return 0;
}

int reverse(int n) {
    int reverse =0, rem;

    while(n!=0) {    
        rem=n%10;    
        reverse=reverse*10+rem;    
        n/=10;    
    }

    printf("Reversed Number: %d",reverse);   
}
```

3. wap to enter any three number and display their sum.

``` c
#include <stdio.h>
int sum(int, int, int);

int main() {
    int numOne, numTwo, numThree;

    printf("Enter any three number: ");
    scanf("%d %d %d", &numOne, &numTwo, &numThree);

    sum(numOne, numTwo, numThree);

    return 0;
}

int sum (int numOne, int numTwo, int numThree) {
    printf("Sum: %d", numOne + numTwo + numThree);
}
```

4. create a user defined function named sanothimi to display the volume of room

``` c
#include <stdio.h>
int sanoThimi(int, int, int);

int main() {
    int length = 0, breath = 0, height  = 0;

    printf("Enter the length, breath and height of room: ");
    scanf("%d %d %d", &length, &breath, &height);
    
    sanoThimi(length, breath, height);        

    return 0;
}

int sanoThimi (int length, int breath, int height) {
    printf("The volume of the room is %dcm3", length * breath * height);
}
```