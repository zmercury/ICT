// Enter the three sides of a triangle and calculate its area

#include <stdio.h>
#include <math.h>

int main() {
    float sideOne, sideTwo, sideThree, area, semiPerimeter;

    printf("Enter the length of side one: ");
    scanf("%f", &sideOne);
    printf("Enter the length of side two: ");
    scanf("%f", &sideTwo);
    printf("Enter the length of side three: ");
    scanf("%f", &sideThree);

    semiPerimeter = (sideOne + sideTwo + sideThree) / 2;
    area = sqrt(semiPerimeter * (semiPerimeter - sideOne) * (semiPerimeter - sideTwo) * (semiPerimeter - sideThree));

    printf("The area of triangle is %.2fcm2\n", area);

    return 0;
}