#include<stdio.h>
void factorial();
void main()
{
	int number;
	printf("Enter a number : ");
	scanf("%d",&number);
	factorial(number);
}
void factorial(int number)
{

	int i=1,result=1;

	while(i<=number)
	{
		result=i*result;
		i++;
	}
	printf("Factorial of %d is %d",number,result);
}	