#include <stdio.h>
int sanoThimi(int, int, int);

int main() {
    int length = 0, breath = 0, height  = 0;

    printf("Enter the length, breath and height of room: ");
    scanf("%d %d %d", &length, &breath, &height);
    
    sanoThimi(length, breath, height);        

    return 0;
}

int sanoThimi (int length, int breath, int height) {
    printf("The volume of the room is %dcm3", length * breath * height);
}