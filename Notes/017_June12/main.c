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
        printf("%d is a Palindrome number!", temp);    
    } else {
        printf("%d is not palindrome number!", temp);   
    }    

    return 0;  
}   