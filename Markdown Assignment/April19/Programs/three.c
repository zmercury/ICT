//enter any marks in any four subject and display the total and average

#include <stdio.h>

int main() {
    int a[3], total=0, average, i;

    for (i = 1; i <= 4; i++ ) {
        printf("Enter marks of %d: ",i);
        scanf("%d", &a[i]);
        total = total + a[i];
    }

    average = total / 4;

    printf("Total: %d\n", total);
    printf("Average: %d\n", average);

    return 0;
}