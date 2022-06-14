### June 14

## Programming

1. Wap to input any number and check if it is prime or composite.

```c
#include <stdio.h>

int main() {
    int number,inc,i;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        if(number%i==0) {
            inc = inc + 1;
        }
    }
    if(inc == 2) {
        printf("%d is prime number!", number);
    } else {
        printf("%d is composite number!", number);
    }

    return 0;
} 
```

```c
#include<stdio.h>
int main()
{
    int n, count;
    printf("Enter any number:");
    scanf("%d", &n);
    if(n>1){
        for (int i = 1; i <= n;i++) {
                if(n%i==0) { 
                    count = count + 1;
                }
            }
            if( count==2){
                printf("%d is the prime number", n);
            } else {
                printf("%d is the composite number", n);
            }
    } else{
        printf("%d is neither prime nor composite", n);
    }
        return 0;
}
```


```c
#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if(num>0) {
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                sum = sum + i;
            }
        }
        printf("The sum of factors of %d is %d ", num, sum);
    } else {
        printf("Please Enter a positive number!");
    }
    return 0;
}
```

```c

// me - Biraj solved

#include<stdio.h>

int main()
{
    int a, sum=0, i;

    printf("Enter any positive number");
    scanf("%d", &a);
    
    if(a>0){
        for (i = 1; i <=a; i++){
            if(a%i==0){
                sum = sum + i;
            }
            printf("The sum of the factors %d is %d ", a, sum);
            }
    } else {
        printf("Enter the positive number");
    }
    return 0;
}
```

```c
//biraj dai

#include<stdio.h>
int main()
{
    int a, sum = 0, i;
    printf("Enter any number\t");
    scanf("%d", &a);
    if(a>0){
        for ( i = 1; i <=a; i++)
        {
            if(a%i==0){
                printf("%d\t", i);
                // sum = sum + i;
            }
        }
      //  printf("The sum of the factors of %d is %d", a, sum);
    }else {
        printf("Please enter the positve number");
    }
    return 0;
}


```