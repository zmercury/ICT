//Enter the radius of a circle and calculate its area

#include <stdio.h>
#define PI 3.14

int main() {
    int r, area;

    printf("Enter the radius of circle: ");
    scanf("%d", &r);

    area = PI * r * r;

    printf("The area of circle is %dcm2\n", area);

    return 0;
}