#include<stdio.h>
void calculate(int*,int*,char*);
void main()
{	
	int n1,n2;
	char op;
	printf("Enter any two number and operation(+,-,/,*,%) to perform : ");
	scanf("%d %d %c",&n1,&n2,&op);
	calculate(&n1,&n2,&op);			
}
void calculate(int* n1,int* n2,char* op)
{
	int result;
	if(*op=='+')
	{
		result=(*n1)+(*n2);
	}
	if(*op=='-')
	{
		result=(*n1)-(*n2);
	}	
	if(*op=='*')
	{
		result=*(n1)*(*n2);
	}
	if(*op=='/')
	{
		result=(*n1)/(*n2);
	}
	if(*op=='%')
	{
		result=(*n1)%(*n2);
	}
	printf("%d %c %d = %d",*n1,*op,*n2,result);
}