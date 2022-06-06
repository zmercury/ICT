// 1...8...27....64...... up to 10th term
 

#include <stdio.h>

int main() {
    int num;
    for (int i = 1; i <= 10; i++) {
        num = i * i * i;
        printf("%d\t", num);
    }
    return 0;
}