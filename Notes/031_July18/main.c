#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n,a[100], i, sum=0;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        printf("Enter %d numbers: ", i+1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n;i++){
        sum +=  a[i];
    }

    printf("The sum of all the numbers is %d", sum);
    
    return 0;
}
