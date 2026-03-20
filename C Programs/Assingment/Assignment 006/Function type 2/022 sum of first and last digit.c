#include<stdio.h>
int sum();
void main()
{	
	int x;
	x=sum();
	printf("The sum first and last digit is %d",x);	
}
int sum()
{
	int number,last_digit,first_digit,result;
	printf("Enter a number : ");
	scanf("%d",&number);
	while(number>10)
	{
		last_digit=number%10;
		number=number/10;
		first_digit=number;;
	}
	result=first_digit + last_digit;
	return result;	
}