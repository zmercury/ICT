## Assignment

1. To find the sum of two number

```c
#include <stdio.h>

int main ()
{
  int a,b;

  printf("Enter the value of A and B: \n");
  scanf("%d %d",&a, &b);
  
  printf("The sum of %d and %d is %d\n",a,b,a+b);
  return 0;
}

```

2. 

```c
#include <stdio.h>

int main (int argc, char *argv[])
{
  int a;

  printf("Enter a number: \n");
  scanf("%d",&a);

  printf("The square of %d is %d\n",a,a * a);
  return 0;
}
```

3. To print sum, subtract, product and quotient of two numbers 32 and 8.

```c
#include <stdio.h>

int main (int argc, char *argv[])
{
  int a=32, b=8;

  printf("The sum of %d and %d is %d\n",a,b,a+b);
  printf("The substraction of %d and %d is %d\n",a,b,a-b);
  printf("The division of %d and %d is %d\n",a,b,a/b);
  printf("The product of %d and %d is %d\n",a,b,a*b);
  
  return 0;
}
```

4. Enter two numbers and print sum, difference, product and division of both number.

```c
#include <stdio.h>

int main (int argc, char *argv[])
{
  int a,b;

  printf("Enter the value of A and B: ");
  scanf("%d %d", &a, &b);

  printf("The sum of %d and %d is %d\n",a,b,a+b);
  if(a>b) {
    printf("The substraction of %d and %d is %d\n",a,b,a-b);
    printf("The division of %d and %d is %d\n",a,b,a/b);
  } else {
    printf("The substraction of %d and %d is %d\n",a,b,b-a);
    printf("The division of %d and %d is %d\n",a,b,b/a);
  }
  printf("The product of %d and %d is %d\n",a,b,a*b);

  return 0;
}
```

5. Write a program to calculate total amount of (p) kept in bank for (n) years at the rate of (r) simple interest per annum.

```c
#include <stdio.h>

int main (int argc, char *argv[])
{
  int p, t, r, si;

  printf("Enter the value of Principle: ");
  scanf("%d", &p);
  printf("Enter the value of Time: ");
  scanf("%d", &t);
  printf("Enter the value of Rate: ");
  scanf("%d", &r);

  si = (p * t * r) / 100;

  printf("The SI is %d", si);

  return 0;
}
```

6. Write a program to evaluate the expression (i) x-y (ii) x+y (iii)x*y (iv)x/y (v) Remainder of x and y.

```c
#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[])
{
  float x,y;

  printf("Enter the value of X and Y: ");
  scanf("%f %f", &x, &y);

  printf("x + y = %.2f\n", x+y);
  printf("x - y = %.2f\n", x-y);
  printf("x * y = %.2f\n", x*y);
  printf("x / y = %.2f\n", x/y);
  printf("x %% y = %.2f\n", fmod(x,y));
  
  return 0;
}
```

7. Input three numbers and print sum and average.

```c
#include <stdio.h>

int main (int argc, char *argv[])
{
  int a, b, c;

  printf("Enter the value A, B and C: ");
  scanf("%d %d %d", &a, &b, &c);

  printf("The sum of %d %d and %d is %d\n", a, b, c, a + b + c);
  printf("The average of %d %d and %d is %d\n", a, b, c, (a + b + c) / 3);

  return 0;
}
```

8. Write an algorithm, flowchart and C program to calculate the volume of a pool. The equation for determine the volume =length x depth x width. Assume that the pool has a length of 25 feet width of 10 feet and depth 6 feet. 

```c

```