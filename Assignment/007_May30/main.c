#include<stdio.h>
int main()
{
    int choice, l, b, h;
    printf("Enter 1 for area \n");
    printf("Enter 2 for volume of the room \n");
    printf("Enter 3 for perimeter \n");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
            printf("Enter length and breadth");
            scanf("%d %d", &l,&b);
            printf("Area= %dCm2 \n", l * b);
            break;
        case 2:
            printf("Enter length and breadth and height");
            scanf("%d %d %d", &l,&b,&h);
            printf("VOLUME= %dCm3 \n", l * b * h);
            break;
        case 3:    
            printf("Enter length and breadth");
            scanf("%d %d", &l , &b);
            printf("Perimeter=%d Cm \n", 2* (l +b));
            break;
        default:
            printf("Invalid info!");
            break;      
    }
}