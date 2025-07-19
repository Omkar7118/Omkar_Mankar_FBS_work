#include<stdio.h>
void getage();
void main()
{	
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d ages : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	getage(arr,n);
}
void getage(int* age,int n)
{	
	printf("Ages of Childrens are ");
	for(int i=0;i<n;i++)
	{
	if(age[i]<12)
	{
		printf("%d ",age[i]);
	}
	}
	printf("\nAges of teenagers are ");
	for(int i=0;i<n;i++)
	{
	if(age[i]>=12&&age[i]<=19)
	{
		printf("%d ",age[i]);
	}
	}
	printf("\nAges of adults are ");
	for(int i=0;i<n;i++)
	{
	if(age[i]>=20&&age[i]<=59)
	{
		printf("%d ",age[i]);
	}
	}
	printf("\nAges of senior are");
	for(int i=0;i<n;i++)
	{
	if(age[i]>=60)
	{
		printf("%d ",age[i]);
	}
	}
}