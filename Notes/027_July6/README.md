### July 6

Programming
-

### Recursive Function

The function which call itself is called recursive function

stntax:

```c
int fun1(parameter);

int main() {
    //.....
    fun1(argument);
}

int fun1(parameter) {
    //.....
    fun1(argument);
}
```

---
 
1. wap to find the factorial using recursive function

```c
#include <stdio.h>
int fact(int);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d", fact(n));
    return 0;
}


int fact(int n) {
    if(n==1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
```

### Assignment

1. Wap to display the sum of first 10 natural number using recursion

```c
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

```