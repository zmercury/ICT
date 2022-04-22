//input p,t,r and find simple interest

#include <stdio.h>

int main() {
    float p, t, r, si;

    printf("Enter the principal: ");
    scanf("%f", &p);

    printf("Enter time: ");
    scanf("%f", &t);

    printf("Enter the rate: ");
    scanf("%f", &r);

    si = (p * t * r) / 100;

    printf("The simple interest is %.f", si);

    return 0;
}