//Wap to display the sum of first 10 natural number using recursion

#include <stdio.h>
int addNumbers(int n);

int main() {

  int num = 10;
  printf("Sum = %d", addNumbers(num));
  return 0;
}

int addNumbers(int n) {
  if (n != 0)
    return n + addNumbers(n - 1);
  else
    return n;
}
