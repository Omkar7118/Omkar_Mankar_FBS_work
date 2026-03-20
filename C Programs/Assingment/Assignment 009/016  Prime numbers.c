#include<stdio.h>
void prime();
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
	prime(arr,n);	
}
void prime(int* p,int n)
{		
	printf("Prime numbers are ");
	for(int i=1;i<n;i++)
	{		
		int j=2,flag=0;

		while(j<p[i])
		{
			if(p[i]%j==0)
			{	
				flag=1;
				break;
			}
			j++;
		}
		if(flag==0)
		{
			printf("%d ",p[i]);	
		}
	}
	printf("\nNot prime number are ");
	for(int i=1;i<n;i++)
	{		
		int j=2,flag=0;

		while(j<p[i])
		{
			if(p[i]%j==0)
			{	
				flag=1;
				break;
			}
			j++;
		}
		if(flag==1)
		{
			printf("%d ",p[i]);	
		}
	}
}