#include <stdio.h>

int main() 
{
    int i, j, isPrime;

    printf("Prime numbers between 1 and 50 are:\n");

    for(i = 2; i <= 50; i++)
     {
        isPrime = 1;  

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0;  
                break;
            }
        }

        if(isPrime == 1)
         {
            printf("%d ", i);
        }
    }

    return 0;
}