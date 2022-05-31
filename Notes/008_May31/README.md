### May 31


## Programming

``` c
// input 3 number from user and find the greatest one! (Biraj Lamichhane)

#include <stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter a, b and c \t");
    scanf(" %d %d %d", &a, &b, &c);
    if(a>b){
        if(a>c){
            printf("%d is the greatest number", a);
        } else {
            printf("%d is the greatest number",c);
        }
    } else {
        if (b>c) {
            printf("%d is the greatest number",b);
        } else {
            printf("%d is the greatest number",c);
        } 
    }
    
    return 0;
}

```