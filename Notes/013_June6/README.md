#### 6th June

### Programming

#### Write a program to generate series

1. 1...8...27....64...... up to 10th term

```c
#include <stdio.h>

int main() {
    int num;
    for (int i = 1; i <= 10; i++) {
        num = i * i * i;
        printf("%d\t", num);
    }
    return 0;
}
```
    
2. 5...10...15...20...... up to 10th term

```c
#include <stdio.h>

int main() {
    int num = 0;
    for (int i = 1; i <= 10; i++) {
        num = num + 5;
        printf("%d\t", num);
    }
    return 0;
}
```
3. 10...9...8...7... up to 10th term

```c
#include <stdio.h>

int main() {
    for (int i = 10; i >= 1; i--) {
        printf("%d\t", i);
    }
    return 0;
}
```

4. 10...20...30...40... up to 10th term

```c
#include <stdio.h>

int main() {
    int num = 0;
    for (int i = 1; i <= 10; i++) {
        num = num + 10;
        printf("%d\t", num);
    }
    return 0;
}
```



