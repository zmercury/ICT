#### June 12

### Programming 

1. Wap to enter any number and display its reverse order

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