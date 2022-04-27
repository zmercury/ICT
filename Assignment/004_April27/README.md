## April 27

### Assignment

#### 1. WAP to enter marks of 3 subjecs and check if you are passed or not assume pass marks is 40.

```c
#include <stdio.h>

int main() {
    int subjectOne, subjectTwo, subjectThree;

    printf("Enter the marks of 1st subject: ");
    scanf("%d", &subjectOne);
    printf("Enter the marks of 2nd subject: ");
    scanf("%d", &subjectTwo);
    printf("Enter the marks of 3rd subject: ");
    scanf("%d", &subjectThree);

    if ( subjectOne > 40 && subjectTwo > 40 && subjectThree > 40) {
        printf("You passed the exam!");
    } else {
        printf("You failed the exam!");
    }

    return 0;
}
```