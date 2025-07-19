#include<stdio.h>
void calculate(int*,char*);
void main()
{	
	int arr[2];
	char op;
	printf("Enter any two number and operation(+,-,/,*,%) to perform : ");
	for(int i=0;i<2;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%c",&op);
	calculate(arr,&op);			
}
void calculate(int* arr,char* op)
{
	int result;
	if(*op=='+')
	{
		result=arr[0]+arr[1];
	}
	if(*op=='-')
	{
		result=arr[0]-arr[1];
	}	
	if(*op=='*')
	{
		result=arr[0]*arr[1];
	}
	if(*op=='/')
	{
		result=arr[0]/arr[1];
	}
	if(*op=='%')
	{
		result=arr[0]%arr[1];
	}
	printf("%d %c %d = %d",arr[0],*op,arr[1],result);
}