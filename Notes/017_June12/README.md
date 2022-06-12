#### June 12

### Programming 

1. Wap to enter any number and display its reverse order

```c
#include <stdio.h>

int main() {
    int n, sum = 0, m;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The reverse of %d is: ", n);

    while(n>0) {
        m = n % 10;
        printf("%d", m);
        n = n / 10;
    }

    return 0;
}    
```

> or

``` c
#include <stdio.h>

int main() {

    int n,sum=0,m;  

    printf("Enter a number:");    
    scanf("%d",&n);    

    while(n>0) {    
        m=n%10;   
        sum=sum*10+m;     
        n=n/10;    
    }
    
    printf("The reverse is %d",sum);       

    return 0;  
}   
```

2. Wap to enter any number and check if it is palindrome or not

```c
#include<stdio.h> 

int main() {    
    int n,r,sum=0,temp;    
    printf("Enter the number: ");    
    scanf("%d",&n);    

    temp=n;   

    while(n>0) {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }

    if(temp==sum) {
        printf("%d is a palindrome number!", temp);    
    } else {
        printf("%d is not palindrome number!", temp);   
    }    

    return 0;  
}   
```