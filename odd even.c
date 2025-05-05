#include <stdio.h>
int main ()
{
    int num,rem;
    printf("enter number:");
    scanf("%d",&num);
 
       rem=num%2;

        if (rem==0)
    {
        printf("the entered number %d is even",num);
    }
    else
      {
        printf("the entered number %d is odd",num);
    }
    return 0;
}