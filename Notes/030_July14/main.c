#include <stdio.h>

int main() {
    int n=15, inc=0;
    double salary[15];

    for (int i = 0; i < n; ++i) {
        printf("Enter %d employee's salary: ", i + 1);
        scanf("%lf", &salary[i]);
    }

    for (int i = 1; i < n; ++i) {
        if (salary[i] > 50000) {
            inc++;
        }
    }

    printf("No. of employee getting salary above 50000 is %d", inc);

    return 0;
}