#include<stdio.h>
int factorial();
void main()
{
	int number,res;
	printf("Enter a number : ");
	scanf("%d",&number);
	res=factorial(number);
	printf("Factorial of %d is %d",number,res);
}
int factorial(int number)
{

	int i=1,result=1;

	while(i<=number)
	{
		result=i*result;
		i++;
	}
	return result;
}	