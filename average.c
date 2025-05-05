#include <stdio.h>
int main( )
{
	int num1, num2, sum;
	float avg;
	
	printf ( " enter two numbers : ");
	scanf( "%d %d", & num1,&num2);
	
	sum= num1+num2;
	
	avg= (sum)/2;
	printf("Average is %.2f",avg);
	
	return 0;
}