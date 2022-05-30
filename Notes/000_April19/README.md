### Date : April 19th

# Questions:

### Write an algorithm, flowchart, and c program to;

1. Input two numbers and display their sum.
2. Input principal, time, rate, display interest, and amount.
3. Enter any marks in any four subjects and display the total and average.
4. Enter the length, breadth, and height of a room and calculate its volume.
5. Enter the length and breadth of a room and calculate its area.
6. Enter the radius of a circle and calculate its area.
7. Enter the radius and height of the sphere and calculate its volume.
8. Enter the length of a square and calculate its area.
9. Enter the base and height of a triangle and calculate its area.
10. Enter the three sides of a triangle and calculate its area.
11. Input the distance in kilometers and convert it into meters.
12. Input weight in grams and convert it into kilograms.
13. Enter two floating-point numbers and display their average.

# Solutions:

#### 1. Input two numbers and display their sum

``` md 
> Algorithm

1. Start 
2. Read a & b
3. sum = a + b
4. print sum
5. stop
```

```c
#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}
```

#### 2. Input principal, time, rate, display simple interest

``` md 
> Algorithm

1. Start 
2. Read p, t and r
3. calculate si using SI = P x T x R
4. print SI
5. stop
```

```c
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
```

#### 3. Enter any marks in any four subjects and display the total and average.

``` md 
> Algorithm

1. Start 
2. Read 4 marks using array and loop
3. calculate average and total 
4. print average and total
5. stop
```

```c
#include <stdio.h>

int main() {
    int a[3], total=0, average, i;

    for (i = 1; i <= 4; i++ ) {
        printf("Enter marks of %d: ",i);
        scanf("%d", &a[i]);
        total = total + a[i];
    }

    average = total / 4;

    printf("Total: %d\n", total);
    printf("Average: %d\n", average);

    return 0;
}
```

#### 4. Enter the length, breadth, and height of a room and calculate its volume.

``` md 
> Algorithm

1. Start 
2. Read length, breath & height of room
3. volume = length x breath x height
4. print volume
5. stop
```

```c
#include <stdio.h>

int main() {
    int l, b, h, volume;

    printf("Enter the length of room: ");
    scanf("%d", &l);
    printf("Enter the breath of room: ");
    scanf("%d", &b);
    printf("Enter the height of room: ");
    scanf("%d", &h);

    volume = l * b * h;

    printf("The Volume of the room is %dcm3", volume);

    return 0;
}
```

#### 5. Enter the length and breadth of a room and calculate its area.

``` md 
> Algorithm

1. Start 
2. Read lenght & breath
3. area = length x breath
4. print area
5. stop
```

```c
#include <stdio.h>

int main() {
    int l, b, area;

    printf("Enter the length of the room: ");
    scanf("%d", &l);
    printf("Enter the breath of the room: ");
    scanf("%d", &b);

    area = l * b;

    printf("The area of the room is %dcm2", area);

    return 0;
}
```

#### 6. Enter the radius of a circle and calculate its area

``` md 
> Algorithm

1. Start 
2. Read radius
3. area = PI x r x r
4. print area
5. stop
```

```c
#include <stdio.h>
#define PI 3.14

int main() {
    int r, area;

    printf("Enter the radius of circle: ");
    scanf("%d", &r);

    area = PI * r * r;

    printf("The area of circle is %dcm2\n", area);

    return 0;
}
```

#### 7. Enter the radius and height of the sphere and calculate its volume.

``` md 
> Algorithm

1. Start 
2. Read radius & height
3. volume = 4 / 3 x PI x r x r x r
4. print volume
5. stop
```

```c
#include <stdio.h>
#define PI 3.14

int main() {
    float r, volume;

    printf("Enter the radius of sphere: ");
    scanf("%f", &r);

    volume = (4 / 3.0) * PI * r * r * r;

    printf("The Volume of sphere is %.2fcm3\n", volume);

    return 0;
}
```

#### 8. Enter the length of a square and calculate its area.

``` md 
> Algorithm

1. Start 
2. Read length of square
3. area = length x length
4. print area
5. stop
```

```c
#include <stdio.h>

int main() {
    int len, area;

    printf("Enter the length of the square: ");
    scanf("%d", &len);

    area = len * len;

    printf("The area of square is %dcm2\n", area);

    return 0;
}
```

#### 9. Enter the base and height of a trangle and calculate its area

``` md 
> Algorithm

1. Start 
2. Read base & height
3. area = ( base x height ) / 2
4. print area
5. stop
```

```c
#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = (base * height) / 2;

    printf("The area of triangle is %.2fcm2\n", area);

    return 0;
}
```

#### 10. Enter the three sides of a triangle and calculate its area

``` md 
> Algorithm

1. Start 
2. Read 3 sides
3. semiperimeter =  (sideOne + sideTwo + sideThree) / 2;
4. calculate area
5. print area
6. stop
```

```c
#include <stdio.h>
#include <math.h>

int main() {
    float sideOne, sideTwo, sideThree, area, semiPerimeter;

    printf("Enter the length of side one: ");
    scanf("%f", &sideOne);
    printf("Enter the length of side two: ");
    scanf("%f", &sideTwo);
    printf("Enter the length of side three: ");
    scanf("%f", &sideThree);

    semiPerimeter = (sideOne + sideTwo + sideThree) / 2;
    area = sqrt(semiPerimeter * (semiPerimeter - sideOne) * (semiPerimeter - sideTwo) * (semiPerimeter - sideThree));

    printf("The area of triangle is %.2fcm2\n", area);

    return 0;
}
```

#### 11. Input the distance in kilometers and convert it into meters

``` md 
> Algorithm

1. Start 
2. Read distance in kilometers
3. distInMeter = distInKilometer x 1000
4. print distInMeter
5. stop
```

```c
#include <stdio.h>

int main() {
    int distKm;

    printf("Enter the distance in Kilometers: ");
    scanf("%d", &distKm);

    printf("%d KM is %d Meters\n", distKm, distKm * 1000);

    return 0;
} 
```

#### 12. Input weight in grams and convert it into kilogram

``` md 
> Algorithm

1. Start 
2. Read weight in grams 
3. weightInKilograms = weightInGrams / 1000
4. print weightInKilograms
5. stop
```

```c
#include <stdio.h>

int main() {
    float weightInGrams, weightInKilograms;

    printf("Enter the weight in grams: ");
    scanf("%f", &weightInGrams);

    weightInKilograms = weightInGrams / 1000;

    printf("%.2f Grams is equal to %.2f Kilograms\n", weightInGrams, weightInKilograms);

    return 0;
}
```

#### 13. Enter two floating-point numbers and display their average

``` md 
> Algorithm

1. Start 
2. Read a & b
3. average = (a + b) / 2
4. print average
5. stop
```

```c
#include <stdio.h>

int main() {
    float a, b, average;

    printf("Enter any two floating number: ");
    scanf("%f %f", &a, &b);

    average = (a + b) / 2;

    printf("The average of %.2f and %.2f is %.2f\n", a, b, average);

    return 0;
}
```