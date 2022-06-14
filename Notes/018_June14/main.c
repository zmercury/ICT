#include<stdio.h>  

int main() {    
    int number,n,sum=0,temp;

    printf("Enter any number: ");
    scanf("%d",&number);    

    temp=number;

    while(number>0){    
        n=number%10;    
        sum=sum+(n*n*n);    
        number=number/10;    
    }

    if(temp==sum){
        printf("%d is an armstrong  number", temp);    
    } else {
        printf("%d is not armstrong number", temp);    
    }    

    return 0;  
}   