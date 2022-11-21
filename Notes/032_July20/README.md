### July 20

```c
#include <stdio.h>

int main() {
    int a[2][2], b[2][2], sum[2][2], i, j;

    printf("Enter the first matrix: ");
    for (i = 0; i < 2;i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        } 
    }

    printf("Enter the second matrix: ");
    for (i = 0; i < 2;i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        } 
    }

    for (i = 0; i < 2;i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        } 
    }

    for (i = 0; i < 2;i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

### Pointer 

Pointer is a variable which stores the address of another variable.

```c
#include <stdio.h>

int main() {
    int x = 10, *y;
    y = &x;
    printf("Address: %d", y);
    return 0;
}
```

### Assignment


