#include <stdio.h>

int main() {
    int i = 1000;

    do {
        printf("%d\n", i);
        i--;
    } while (i >= 900);

    return 0;
};