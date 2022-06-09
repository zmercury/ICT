#include <stdio.h>

int main() {
    int sumOfEven = 0;
    int sumOfOdd = 0;

    for (int i = 1; i <= 10; i++) {
        if(i%2==0) {
            sumOfEven = sumOfEven + i;
        } else {
            sumOfOdd = sumOfOdd + i;
        }
    }
    
    printf("The sum of all even numbers is %d\n", sumOfEven);
    printf("The sum of all odd numbers is %d\n", sumOfOdd);

    return 0;
}
