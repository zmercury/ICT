# Notes

## 4/12

Write and draw flowchart and write c program to find the input two numbers and display their product.

Write an algorithm, draw flowchart and write c program to :

- input length and breath of room and display its area.

- Input principle, time and rate of interest and calculate interest.

- Input length, breath and height of a room and calculate its area, volume and perimeter.

### Assignment (In Chemistry Copy)

- Objective: to display product of two numbers  
- System Requirement: Os, Ram, Dev c
- Algorithm
- Flowchart
- C Program


## 4 /21

### Use of constant

1.  Use const to make a variable constant  <!-- eg: const int a = 10; -->

#### Example

```c
#include <stdio.h>

int main() {
    const int pi=3.14;
    //the value of pi is constant and cannot be changed!

    printf("The value of PI is %d", pi);

    return 0;
}
```

#### Write a program to input radius and height of sphere and calculte the volume

```c
#include <stdio.h>
#define PI 3.14

int main() {
    int radius, height, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%d", &radius);

    printf("Enter the height of the sphere: ");
    scanf("%d", &height);

    volume = PI * (radius * radius * radius) * height;

    printf("The volume of the sphere is %dcm2\n", volume);

    return 0;
}
```

### April 22
#### Histroy of Operating System




