### June 14

Programming
---

1. Wap to enter 9 numbers and display the greatest one using an array.

```c
#include <stdio.h>

int main() {
    int n=8;
    double number[8];

    for (int i = 0; i < n; ++i) {
        printf("Enter %d number: ", i + 1);
        scanf("%lf", &number[i]);
    }

    for (int i = 1; i < n; ++i) {
        if (number[0] < number[i]) {
            number[0] = number[i];
        }
    }

    printf("Largest element = %.lf", number[0]);

    return 0;
}
```

2. biraj dosti lay gareko 

```c
#include<stdio.h>
int main () {
    int array[10], i, b = 0;

    for (i = 0; i < 10; i++){
        printf("Enter %d age: ", i+1);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 10;i++){
        if(array[i]>b) {
            b = array[i];
        }
    }
    printf("The greatest age is %d", b);

    return 0;
}
```

3. Wap te enter salary of 15 employee and count numbers of emoloyee with salary greater than 50000.

```c
#include <stdio.h>

int main() {
    int n=15, inc=0;
    double salary[15];

    for (int i = 0; i < n; ++i) {
        printf("Enter %d employee's salary: ", i + 1);
        scanf("%lf", &salary[i]);
    }

    for (int i = 1; i < n; ++i) {
        if (salary[i] > 50000) {
            inc++;
        }
    }

    printf("No. of employee getting salary above 50000 is %d", inc);

    return 0;
}
```

### Assignment

1. Wap to enter age of 20 students and display the smallest 
1. Wap to enter due fee of 15 students and count numbners of students having due fee greater than 2500 and less then 5000

```c
#include <stdio.h>

int main() {
  int fee[10], count=0;
  
  for(int i=1; i<=10; i++) {
    printf("Enter the due fee of %d student: ", i);
    scanf("%d", &fee[i]);
  }

  for(int i=1; i<=10; i++) {
    if(fee[i]>=2500 && fee[i]<=5000) {
      count++;
    }
  }
  printf("The number of student with due amount between 3500 and 5000 is %d", count);

  return 0;
}       
```
