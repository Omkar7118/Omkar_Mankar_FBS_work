#include<stdio.h>
int factorial();
void main()
{
	int x;
	x=factorial();
	printf("Factorial is %d",x);	
}
int factorial()
{
	int number,i=1,result=1;
	printf("Enter a number : ");
	scanf("%d",&number);
	while(i<=number)
	{
		result=i*result;
		i++;
	}
	return result;
}