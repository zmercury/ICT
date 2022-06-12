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

### ICT

## Introduction to computer network

Computer network


``` md
> Clients: Clients are the network comouters on which user run applications. They are less powerfull, less processing speed and less storage capacity than server. Usually they are dependent to the server and request to the server to get information.
> Server: 
> Node: Node is any active electronic device that is attached to a network and can receive, generate, process or forward information iver a communication channel. Example modem, hub, bridge or switch etc.
```

### Advantages of Computer network

```md
> A network connected computer can easily share info with other computer
> Network on a computer can share peripheral devices like printer, hard disk etc.
> It can share software between member workstations; therefore it saves money for not buying multiple copies of system or programs. 
> Network helps to keep info reliable and up to date.
> Network also provides the function of backup.
```

### Disadvantafes of Computer Network

```md
> 
```


