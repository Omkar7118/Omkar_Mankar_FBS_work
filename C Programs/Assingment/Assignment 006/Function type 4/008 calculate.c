#include<stdio.h>
int calculate();
void main()
{	
	int n1,n2,res;
	char op;
	printf("Enter any two number and operation(+,-,/,*,%) to perform : ");
	scanf("%d %d %c",&n1,&n2,&op);
	res=calculate(n1,n2,op);
	printf("%d %c %d = %d",n1,op,n2,res);			
}
int calculate(int n1,int n2,int op)
{
	int result;
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