#include <stdio.h>

int main() {
    int choice,l,b,h;

    printf("Enter 1 for area of room:\n ");
    printf("Enter 2 for volume of room:\n  ");
    printf("Enter 3 for perimeter:\n ");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {    
        case 1: {
            printf("Enter length and breath of the room: ");
            scanf("%d %d", &l, &b);
            printf("Area = %dcm2\n", l * b);
            break;
        }
        case 2: {
            printf("Enter length, breath and height of the room: ");
            scanf("%d %d %d", &l, &b, &h);
            printf("Volume = %dcm3\n", l * b * h);
            break;
        }
        case 3: {
            printf("Enter length and breath of the room: ");
            scanf("%d %d", &l, &b);
            printf("Perimeter = %dcm\n", 2 * (l + b));
            break;
        }
        default: {
            break;
        }
    }
    return 0;
}