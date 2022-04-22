//Enter the length of a square and calculate its area.

#include <stdio.h>

int main() {
    int len, area;

    printf("Enter the length of the square: ");
    scanf("%d", &len);

    area = len * len;

    printf("The area of square is %dcm2\n", area);

    return 0;
}