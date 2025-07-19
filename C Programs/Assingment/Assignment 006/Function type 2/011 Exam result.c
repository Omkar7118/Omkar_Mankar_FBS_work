#include<stdio.h>
int marks();
void main()
{	
	int x;
	x=marks();
	if(x>=75)
	{
		printf("You passed with DISTINCT");
	}
	else if(x>=65)
	{
		printf("You passed with FIRST CLASS");
	}
	else if(x>=55)
	{
		printf("You passed with SECOND CLASS");
	}	
	else if(x>=40)
	{
		printf("You passed with PASS CLASS");
	}
	else
	{
		printf("You FAILED");
	}
}
int marks()
{
	int marks;
	printf("Enter your marks : ");
	scanf("%d",&marks);
	return marks;	
}