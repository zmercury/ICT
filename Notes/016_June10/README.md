#### June 10

### Programming

1. Wap to enter any number and display sum of its digit

```c
#include <stdio.h>

int main() {
    int n,sum=0,m;  

    printf("Enter a number:");    
    scanf("%d",&n);    

    while(n>0) {    
        m=n%10;    
        sum=sum+m;    
        n=n/10;    
    }

    printf("Sum  = %d",sum);       
    return 0;  
}      
```

2. Write a program to enter ant four digits even number and display sum of its all digits

```c

#include <stdio.h>

int main() {

    int n,sum=0,m;  

    printf("Enter a number:");    
    scanf("%d",&n);    

    if (n > 999 && n < 10000) {
        while(n>0) {    
            m=n%10;    
            sum=sum+m;    
            n=n/10;    
        }
        printf("Sum = %d",sum);       
    } else {
        printf("Enter a four digit number!");
    }

    return 0;  
}      

```