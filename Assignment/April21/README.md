### Date : April 21st

#### Use of constants 

``` c
#include <stdio.h>

int main() {
    const float PI = 3.14;
    printf("The value of PI is %d\n", PI)
    return 0;
}
```

#### Define PI on the top allows us to use the value of PI in multiple function!
> variable and constant inside a function can't be used outside that function

``` c
#include <stdio.h>
#define PI 3.14

int main() {
    printf("The value of PI is %d\n", PI)
    return 0;
}
```



