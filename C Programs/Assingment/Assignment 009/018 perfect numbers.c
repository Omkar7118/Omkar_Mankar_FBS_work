#include<stdio.h>
void perfect();
void main()
{	
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d Numbers : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	perfect(arr,n);
}
void perfect(int* p,int n)
{
	printf("Perfect number are ");
	for(int i=0;i<n;i++)
	{
	int j=1,result=0;

	while(j<p[i])
	{
		if(p[i]%j==0)
		{
			result=i+result;
		}
		j++;
	}
	if(result==p[i])

	{
		printf("%d ",p[i]);
	}
	}
	printf("\nNot Perfect number are ");
		for(int i=0;i<n;i++)
	{
	int j=1,result=0;

	while(j<p[i])
	{
		if(p[i]%j==0)
		{
			result=i+result;
		}
		j++;
	}
	if(result!=p[i])

	{
		printf("%d ",p[i]);
	}
	}	
}

