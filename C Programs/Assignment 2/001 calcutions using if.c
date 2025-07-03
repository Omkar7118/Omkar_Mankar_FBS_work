#include<stdio.h>
void main()
{
	int n1,n2,result;
	char op;
	printf("Enter any two number and operation to perform : ");
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
	printf("%d %c %d = %d",n1,op,n2,result);
			
}