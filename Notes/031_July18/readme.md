### July 18

1. Wap to find the smallest of n numbers

```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n,a[100], i, s;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        printf("Enter %d numbers: \n", i+1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n;i++){
        if(a[i]<s) {
            s = a[i] ;
        }
    }

    printf("The smallest number is %d", s);

    return 0;
}
```

2. Wap to find the sum of n numbers using array

```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n,a[100], i, sum=0;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        printf("Enter %d numbers: \n", i+1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n;i++){
        sum = sum + a[i];
    }

    printf("The sum of all the numbers is %d", sum);
    
    return 0;
}
```