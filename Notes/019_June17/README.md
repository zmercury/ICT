### June 17

## Programming


#### Nested Loop
- The loop inside of a loop is known as Nested Loop
- The inside loop is known as inner loop

> Syntax

```c
for(initilization; condition; inc/dec;) {
    body of first loop;
    for(initilization; condition; inc/dec) {
        body of inner loop;
    }
}
```
or
```c
for(int i = 0; i <= 10; i++;) {
    for(int j = 0; j <= 10; j++;) {
        statement;
    }
}
```





### Assignment

1. Wap to display all the prime numbers between 1 and 100

```c
#include<stdio.h>
 
int main() {
    int i,j;

    printf("Prime numbers from 1 to 100 are:-\n");    
    
    for(i=2;i<=100;i++) {
        int c=0;

        for(j=1;j<=i;j++) {
            if(i%j==0) {
                c++;
            }
        }
    
       if(c==2) {
            printf("%d ",i);
        }
    }
    return 0;
}
```