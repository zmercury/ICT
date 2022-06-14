#include<stdio.h>

int main()
{
    int a, sum=0, i;

    printf("Enter any positive number");
    scanf("%d", &a);
    
    if(a>0){
        for (i = 0; i <=a; i++){
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