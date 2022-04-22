//Input the distance in kilometers and convert it into meters

#include <stdio.h>

int main() {
    int distKm;

    printf("Enter the distance in Kilometers: ");
    scanf("%d", &distKm);

    printf("%d KM is %d Meters\n", distKm, distKm * 1000);

    return 0;
} 