#include<stdio.h>
int getmark();
void main()
{	
	int marks,res;
	printf("Enter your marks : ");
	scanf("%d",&marks);
	res=getmark(marks);
	if(res==1)
	{
		printf("You passed with DISTINCT");
	}
	else if(res==2)
	{
		printf("You passed with FIRST CLASS");
	}
	else if(res==3)
	{
		printf("You passed with SECCOND CLASS");
	}	
	else if(res==4)
	{
		printf("You passed with PASS CLASS");
	}
	else
	{
		printf("You FAILED");
	}
}
int getmark(int marks)
{

	if(marks>=75)
	{
		return 1;
	}
	else if(marks>=65)
	{
		return 2;
	}
	else if(marks>=55)
	{
		return 3;
	}	
	else if(marks>=40)
	{
		return 4;
	}
	else
	{
		return 5;
	}	
}