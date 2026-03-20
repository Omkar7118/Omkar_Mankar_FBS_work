#include<stdio.h>
void factorial();
void main()
{
	factorial();
}
void factorial()
{

	int number,i=1,result=1;
	printf("Enter a number : ");
	scanf("%d",&number);
	while(i<=number)
	{
		result=i*result;
		i++;
	}
	printf("Factorial of %d is %d",number,result);
}	