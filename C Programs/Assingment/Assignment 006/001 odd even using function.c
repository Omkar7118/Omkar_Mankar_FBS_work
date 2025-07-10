#include<stdio.h>
void odd_even();
void main()
{
	odd_even();
}
void odd_even()
{
	int number;
	printf("Enter a number :");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("%d is Even Number",number);
	}
	else{
		printf("%d is Odd Number",number);
	}	
}