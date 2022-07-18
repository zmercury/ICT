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

3. Wap to enter 10 numbers and arrange then in accessending order 

```c
#include <stdio.h>

int main (){
    int num[20];
    int i, j, a, n=10;

    printf("Enter the elements\n");

    for (i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; ++i){
        for (j = i + 1; j < n; ++j){
            if (num[i] > num[j]){
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    printf("The numbers in ascending order is:\n");
    for (i = 0; i < n; ++i){
        printf("%d  ", num[i]);
    }
}
```

4. Wap to enter n numbers and arrange then in accessending order 

```c
#include <stdio.h>

int main (){
    int num[20];
    int i, j, a, n;

    printf("Enter number of elements in an array\n");
    scanf("%d", &n);

    printf("Enter the elements\n");

    for (i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; ++i){
        for (j = i + 1; j < n; ++j){
            if (num[i] > num[j]){
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    printf("The numbers in ascending order is:\n");
    for (i = 0; i < n; ++i){
        printf("%d  ", num[i]);
    }
}
```

```c
#include <stdio.h>

int main (){
    int num[20];
    int i, j, a, n;

    printf("Enter number of elements in an array\n");
    scanf("%d", &n);

    printf("Enter the elements\n");

    for (i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; ++i){
        for (j = i + 1; j < n; ++j){
            if (num[i] < num[j]){
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    printf("The numbers in ascending order is:\n");
    for (i = 0; i < n; ++i){
        printf("%d  ", num[i]);
    }
}
```