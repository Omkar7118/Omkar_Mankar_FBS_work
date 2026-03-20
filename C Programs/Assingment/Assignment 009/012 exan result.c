#include<stdio.h>
void getmark();
void main()
{	
	int n;
	printf("Enter number of marks : ");
	scanf("%d",&n);
	int marks[n];
	printf("Enter %d marks : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
	}
	getmark(marks,n);
}
void getmark(int* marks,int size)
{	
	for(int i=0;i<size;i++)
	{
		printf("%d result is ",marks[i]);
		if(marks[i]>=75)
		{
			printf("You passed with DISTINCT");
		}
		else if(marks[i]>=65)
		{
			printf("You passed with FIRST CLASS");
		}
		else if(marks[i]=55)
		{
			printf("You passed with SECCOND CLASS");
		}	
		else if(marks[i]>=40)
		{
			printf("You passed with PASS CLASS");
		}
		else
		{
			printf("You FAILED");
		}	
		printf("\n");
}
}