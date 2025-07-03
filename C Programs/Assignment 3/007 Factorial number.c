#include<stdio.h>
void main()
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