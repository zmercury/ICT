#include <stdio.h>

int main() {
    int salesAmount, commission;

    printf("Enter the sales amount: ");
    scanf("%d", &salesAmount);

    if (salesAmount > 500000) {
        commission = ((10 / 100) * salesAmount);
    } else if (salesAmount > 300000) {
        commission = ((3 / 100) * salesAmount);
    } else if (salesAmount > 100000) {
        commission = ((1 / 100) * salesAmount);
    } else {
        commission = ((0.5 / 100) * salesAmount);
    }

    printf("The commission amount is %d\n", commission);

    return 0;
}