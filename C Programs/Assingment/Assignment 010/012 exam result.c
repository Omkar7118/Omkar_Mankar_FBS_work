#include<stdio.h>
void getmark();
void main()
{	
	int marks;
	printf("Enter your marks : ");
	scanf("%d",&marks);
	getmark(&marks);
}
void getmark(int* marks)
{

	if(*marks>=75)
	{
		printf("You passed with DISTINCT");
	}
	else if(*marks>=65)
	{
		printf("You passed with FIRST CLASS");
	}
	else if(*marks>=55)
	{
		printf("You passed with SECCOND CLASS");
	}	
	else if(*marks>=40)
	{
		printf("You passed with PASS CLASS");
	}
	else
	{
		printf("You FAILED");
	}	
}