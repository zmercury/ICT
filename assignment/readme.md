## Assignment

#### 1. To find the sum of two number

```c
#include <stdio.h>

int main ()
{
  int a,b,sum;

  printf("Enter the value of A and B: \n");
  scanf("%d %d",&a, &b);

  sum = a + b;
  
  printf("The sum of %d and %d is %d\n",a,b,sum);
  return 0;
}

```

#### Algorithm

```md
  1. Start
  2. Read A and B
  3. sum = a + b
  4. print sum
  5. Stop
```

#### Flowchart

![](https://github.com/zmercury/ICT/blob/main/assignment/pic/1.png?raw=true)


#### 2. To find the square of a number

```c
#include <stdio.h>

int main (int argc, char *argv[])
{
  int a;

  printf("Enter a number: \n");
  scanf("%d",&a);

  square = a * a;

  printf("The square of %d is %d\n",a,square);
  return 0;
}
```
#### Algorithm


```md
1. Start
2. Read A
3. square = a * a
4. print square
5. stop
```

#### Flowchart

![](https://github.com/zmercury/ICT/blob/main/assignment/pic/2.png?raw=true)



#### 3. To print sum, subtract, product and quotient of two numbers 32 and 8.

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
#### Algorithm


```md
1. Start
2. Initialize a=32 and b=8
3. Display Sum, Substraction, Division and Product 
4. Stop
```

#### Flowchart

![](https://github.com/zmercury/ICT/blob/main/assignment/pic/3.png?raw=true)


#### 4. Enter two numbers and print sum, difference, product and division of both number.

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
#### Algorithm


```md
1. Start
2. Read two numbers 
3. Sum = a + b , Div = a /b , Mul = a * b , Sub = a - b
4. Print sum, div, mul, sub
5. Stop
```
#### Flowchart

![](https://github.com/zmercury/ICT/blob/main/assignment/pic/4.png?raw=true)


#### 5. Write a program to calculate total amount of (p) kept in bank for (n) years at the rate of (r) simple interest per annum.

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
#### Algorithm

```md
1. Start
2. Read P,T,R
3. Calc SI = P * t * r / 100
4. print si
5. Stop
```
#### Flowchart

![](https://github.com/zmercury/ICT/blob/main/assignment/pic/5.png?raw=true)



#### 6. Write a program to evaluate the expression (i) x-y (ii) x+y (iii)x*y (iv)x/y (v) Remainder of x and y.

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
#### Algorithm


```md
1. Start
2. Read X and Y
3. Calculate x + y, x - y, x * y and x / y
4. Print x + y, x - y, x * y and x / y
5. Stop
```

#### Flowchart

![](https://github.com/zmercury/ICT/blob/main/assignment/pic/6.png?raw=true)

#### 7. Input three numbers and print sum and average.

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
#### Algorithm


```md
1. Start
2. Read A, B and C
3. Find Sum and Average
4. Print Sum and Average
5. Stop
```
#### Flowchart

![](https://github.com/zmercury/ICT/blob/main/assignment/pic/7.png?raw=true)


#### 8. Write an algorithm, flowchart and C program to calculate the volume of a pool. The equation for determine the volume =length x depth x width. Assume that the pool has a length of 25 feet width of 10 feet and depth 6 feet. 

```c
#include <stdio.h>

int main()
{
    int length = 25, width = 10, depth = 6, volume;

    volume = length * width * depth;

    printf("The volume of pool is %dcm3", volume);

    return 0;
}
```
#### Algorithm


```md
1. Start
2. Read Length, Width and Depth
3. Calculate Volume = Length * Width * Height
4. Print Volume
5. Stop
```
#### Flowchart

![](https://github.com/zmercury/ICT/blob/main/assignment/pic/8.png?raw=true)


#### 9. Write an algorithm and program to input length and breath of a room, calculate, and print its area and perimeter.

```c
#include <stdio.h>

int main()
{
    int area, perimeter;
    int length, breath;

    printf("Enter the length and breath of the room: ");
    scanf("%d %d", &length, &breath);

    area = length * breath;
    perimeter = 2 * (length * breath);

    printf("The area is %dcm2\n", area);
    printf("The perimeter is %dcm", perimeter);

    return 0;
}
```
#### Algorithm


```md
1. Start 
2. Read Length and Breath
3. Calc Area = Length * breath
4. Calc Perimeter = 2 * (Length * Breath)
5. Print Area and Perimeter
6. Stop
```
#### Flowchart

![](https://github.com/zmercury/ICT/blob/main/assignment/pic/9.png?raw=true)


#### 10. Write a program to read the radius of a sphere and complete its surface area and volume

```c
#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
    int radius;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    printf("Surface Area: %d\n", 4 * PI * pow(radius,2));
    printf("Volume: %d", 4 / 3 * PI * pow(radius, 3));
    
    return 0;
}
```
#### Algorithm


```md
1. Start
2. Read Radius
3. Calculate Surface Area and Volume
4. Print Ans
5. Stop
```

#### Flowchart

![](https://github.com/zmercury/ICT/blob/main/assignment/pic/10.png?raw=true)


#### 11. Write a program to input temprature in Celcius and to print its fahrenheit eq.

```c
#include <stdio.h>

int main()
{
    float temp;

    printf("Enter the temprature in celcius: ");
    scanf("%f", &temp);

    printf("Temperature in F: %.2f", 1.8 * temp + 32);

    return 0;
}
```
#### Algorithm

```md
1. Start
2. Read Temprature in Celcius
3. Convert Temp to F = 1.8 * Temp + 32
4. Print Temprature in F
5. Stop
```

#### Flowchart

![](https://github.com/zmercury/ICT/blob/main/assignment/pic/11.png?raw=true)


#### 12. Write a program to read base and altitude of a triangle and prints its area.

```c
#include <stdio.h>

int main()
{
    float base, height, area;

    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &base, &height);

    printf("The area of triangle is %d", (base * height) / 2);

    return 0;
}
```
#### Algorithm

```md
1. Start
2. Read Base and Height
3. Calculate Area = (base * height) / 2
4. Print Area
5. Stop
```

#### Flowchart

![](https://github.com/zmercury/ICT/blob/main/assignment/pic/12.png?raw=true)


#### 13. Write a program to enter number of days and convert it into years, months and days

```c
#include <stdio.h>

int main()
{
    int number_of_days, years, months, days;

    printf("Enter number of days: ");
    scanf("%d", &number_of_days);

    years = number_of_days / 365;
    months = (number_of_days - years * 365) / 30;
    days = (number_of_days - years * 365 - months * 30);

    printf("Years = %d", years);
    printf("\nMonths = %d", months);
    printf("\nDays = %d", days);

    return 0;
}
```
#### Algorithm
```md
1. Start
2. Read Days 
3. Calculate Years, Months and Days
4. Print Result
5. Stop
```

#### Flowchart

![](https://github.com/zmercury/ICT/blob/main/assignment/pic/13.png?raw=true)
