#include <stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",& num);
    
    if(num>3)
    {
        printf("greater");
    }
    else
    {
        printf("smaller");
    }
    return 0;
}