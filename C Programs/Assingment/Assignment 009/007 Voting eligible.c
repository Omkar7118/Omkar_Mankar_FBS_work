#include<stdio.h>
void voting(int*,int);
void main()
{	
	int n;
	printf("Enter number of ages : ");
	scanf("%d",&n);
	int age[n];
	printf("Enter your age : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&age[i]);
	}
	voting(age,n);
}
void voting(int* age,int size)
{	
	printf("Eligibles for voting are ");
	for(int i=0;i<size;i++)
	{
		if(age[i]>=18)
		{
			printf("%d ",age[i]);
		}
	}
	printf("\nNot Eligibles for voting are ");
	for(int i=0;i<size;i++)
	{
		if(age[i]<18)
		{
			printf("%d ",age[i]);
		}
	}
	
}