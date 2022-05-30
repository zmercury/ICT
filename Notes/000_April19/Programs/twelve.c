//input weight in grams and convert it into kilogram

#include <stdio.h>

int main() {
    float weightInGrams, weightInKilograms;

    printf("Enter the weight in grams: ");
    scanf("%f", &weightInGrams);

    weightInKilograms = weightInGrams / 1000;

    printf("%.2f Grams is equal to %.2f Kilograms\n", weightInGrams, weightInKilograms);

    return 0;
}