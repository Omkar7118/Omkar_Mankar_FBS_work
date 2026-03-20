#include<stdio.h>
int calculate();
void main()
{
	int x;
	x=calculate();	
	printf("%d",x);		
}
int calculate()
{
	int n1,n2,result;
	char op;
	printf("Enter any two number and operation(+,-,/,*,%) to perform : ");
	scanf("%d %d %c",&n1,&n2,&op);
	if(op=='+')
	{
		result=n1+n2;
	}
	if(op=='-')
	{
		result=n1-n2;
	}	
	if(op=='*')
	{
		result=n1*n2;
	}
	if(op=='/')
	{
		result=n1/n2;
	}
	if(op=='%')
	{
		result=n1%n2;
	}
	return result;
}