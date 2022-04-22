//Enter the radius and height of the sphere and calculate its volume.

#include <stdio.h>
#define PI 3.14

int main() {
    float r, volume;

    printf("Enter the radius of sphere: ");
    scanf("%f", &r);

    volume = (4 / 3.0) * PI * r * r * r;

    printf("The Volume of sphere is %.2fcm3\n", volume);

    return 0;
}