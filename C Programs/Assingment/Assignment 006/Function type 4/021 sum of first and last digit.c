#include<stdio.h>
int sum();
void main()
{
	int number,res;
	printf("Enter a number : ");
	scanf("%d",&number);
	res=sum(number);
	printf("The sum first and last digit is %d",res);
}
int sum(int number)
{
	int last_digit,first_digit,result;

	last_digit=number%10;
	while(number>10)
	{
		first_digit=number/10;
		number=number/10;
	}
	result=first_digit + last_digit;
	return result;
}