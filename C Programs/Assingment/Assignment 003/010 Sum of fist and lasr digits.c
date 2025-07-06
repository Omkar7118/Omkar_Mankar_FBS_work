#include<stdio.h>
void main()
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
	printf("The sum first %d and last digit %d is %d",first_digit,last_digit,result);
}