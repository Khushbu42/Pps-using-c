#include <stdio.h>
int main ()
{
    int num,rem;
    printf("enter number:");
    scanf("%d",&num);
 
       rem=num%10;

        if (rem==0)
    {
        printf("the entered number %d is completly divisible by 10",num);
    }
    else
      {
        printf("the entered number %d is not completly divisible by 10 ",num);
    }
    return 0;
}