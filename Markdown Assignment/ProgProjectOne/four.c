//Enter the length, breath and height of a room and calculate its volume

#include <stdio.h>

int main() {
    int l, b, h, volume;

    printf("Enter the length of room: ");
    scanf("%d", &l);
    printf("Enter the breath of room: ");
    scanf("%d", &b);
    printf("Enter the height of room: ");
    scanf("%d", &h);

    volume = l * b * h;

    printf("The Volume of the room is %dcm3", volume);

    return 0;
}