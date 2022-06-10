//wap to enter ant four digits even number and display sum of its all digits

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
