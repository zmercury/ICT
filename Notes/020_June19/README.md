### June 19

## Programming

//Wap to display armstrong number from 1 to 1000

```c
#include <stdio.h>

void main(){
    int num,r,sum,temp;

    printf("Armstrong numbers in given range are: ");
    for(num=1;num<=1000;num++){
         temp=num;
         sum = 0;

         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
printf("\n");
} 
```

### Loop Intrupter

Loop Intrrupters are the interrupters which stops the normal execution of the loop. There are two wats to interrupt the loop as given below: 
1. Break Statement
1. Continue Statement

---
Example of break statement
-
If the value of i is 3, then the loop stops! 



```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
        if (i==3){
            break;
        }
    }

    return 0;
}
```

---
Example of continue statement
-
Continue statement skips the condition! 

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i==4){
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}
```

