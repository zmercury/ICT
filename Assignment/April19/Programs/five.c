//Enter the length and breath of a room and calculate the area

#include <stdio.h>

int main() {
    int l, b, area;

    printf("Enter the length of the room: ");
    scanf("%d", &l);
    printf("Enter the breath of the room: ");
    scanf("%d", &b);

    area = l * b;

    printf("The area of the room is %dcm2", area);

    return 0;
}