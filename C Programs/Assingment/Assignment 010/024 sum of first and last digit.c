#include<stdio.h>
void sum();
void main()
{
	int number;
	printf("Enter a number : ");
	scanf("%d",&number);
	sum(&number);
}
void sum(int* number)
{
	int last_digit,first_digit,result;
	last_digit=*number%10;
	while(*number>10)
	{
		*number=*number/10;
		first_digit=*number;;
	}
	result=first_digit + last_digit;
	printf("The sum first %d and last digit %d is %d",first_digit,last_digit,result);	
}