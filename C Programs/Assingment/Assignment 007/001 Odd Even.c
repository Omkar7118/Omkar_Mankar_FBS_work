#include<stdio.h>
void odd_even();
void main()
{	
	int number;
	printf("Enter a number :");
	scanf("%d",&number);
	odd_even(&number);
}
void odd_even(int *number)
{
	
	if(*number%2==0)
	{
		printf("%d is Even Number",*number);
	}
	else{
		printf("%d is Odd Number",*number);
	}	
}