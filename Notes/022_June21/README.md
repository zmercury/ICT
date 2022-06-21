#### June 21

## Programming

Functions in C
--

1. WAP to enter two number and display their sum using user defined function

```c
#include <stdio.h>
int add(int a, int b); //Function Decleration

int main() {
    int a,b;

    printf("Enter the value of A and B: ");
    scanf("%d %d", &a, &b);

    add(a, b);  //Function Call

    return 0;
}

int add( int a, int b) {    //Function Defination
    printf("The sum of %d and %d is %d\n", a, b, a + b);
}
```
> or

```c
#include <stdio.h>
int add(int a, int b);//Function Decleration

int main() {
    int a,b;
    printf("Enter the value of A and B: ");
    scanf("%d %d", &a, &b);
    printf("The sum of %d and %d is %d",a,b,add(a, b)); //Function Call
    return 0;
}

int add( int a, int b) { //Function Defination
    int ans;
    ans = a + b;
    return ans;
}
```

2. Wap to enter length and breath of a room and display its area using user defined functionarea.

```c
#include <stdio.h>
int area(int, int);

int main() {
    int length, breath; 
    printf("Enter the length and breath of the room: ");
    scanf("%d %d", &length, &breath);
    area(length, breath);
    return 0;
}

int area ( int length, int breath) {
    printf("The area of room is %dcm2", length * breath);
}
```

Assignment 
--

1. Wap to enter length, breath and height of a room and calculate its volume using user defined function vol and calculate its perimeter using user defined function peri.

```c
#include <stdio.h>
int vol(int, int, int);
int peri(int, int);

int main() {
    int length = 0, breath = 0, height  = 0;
    printf("Enter the length, breath and height of room: ");
    scanf("%d %d %d", &length, &breath, &height);
    
    if (length && breath && height) {
        vol(length, breath, height);        
    } else if (length &&  breath) {
        peri(length, breath);
    }
    return 0;
}

int vol (int length, int breath, int height) {
    printf("The volume of the room is %d", length * breath * height);
}

int peri (int length, int breath) {
    printf("The perimeter of the room is %d", 2 * length + 2 * breath);
}
```

2. Wap to enter any number and check if it it even or odd using function

```c
#include <stdio.h>
int checkOddEven(int);

int main() {
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    checkOddEven(number);
    return 0;
}

int checkOddEven(int number) {
    if(number%2==0) {
        printf("%d is even number", number);
    } else {
        printf("%d is odd number", number);
    }
}
```





