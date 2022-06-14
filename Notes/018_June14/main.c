#include<stdio.h>
int main()
{
    int a, sum = 0, i;
    printf("Enter any number\t");
    scanf("%d", &a);
    if(a>0){
        for ( i = 1; i <=a; i++)
        {
            if(a%i==0){
                printf("%d\t", i);
                // sum = sum + i;
            }
        }
      //  printf("The sum of the factors of %d is %d", a, sum);
    }else {
        printf("Please enter the positve number");
    }
    return 0;
}

