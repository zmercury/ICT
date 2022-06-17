//Wap to display all the prime numbers between 1 and 100

#include<stdio.h>
 
int main() {
    int i,j;

    printf("Prime numbers from 1 to 100 are:-\n");    
    
    for(i=2;i<=100;i++) {
        int c=0;

        for(j=1;j<=i;j++) {
            if(i%j==0) {
                c++;
            }
        }
    
       if(c==2) {
            printf("%d ",i);
        }
    }
    return 0;
}