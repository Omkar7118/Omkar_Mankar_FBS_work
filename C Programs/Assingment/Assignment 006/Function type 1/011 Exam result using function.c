#include<stdio.h>
void marks();
void main()
{
	marks();
}
void marks()
{
	int marks;
	printf("Enter your marks : ");
	scanf("%d",&marks);
	if(marks>=75)
	{
		printf("You passed with DISTINCT");
	}
	else if(marks>=65)
	{
		printf("You passed with FIRST CLASS");
	}
	else if(marks>=55)
	{
		printf("You passed with SECCOND CLASS");
	}	
	else if(marks>=40)
	{
		printf("You passed with PASS CLASS");
	}
	else
	{
		printf("You FAILED");
	}	
}