#include<stdio.h>
void getdivisible();
void main()
{
	int n;
	printf("Enter size of your array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter numbers in array : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	getdivisible(arr,n);
}
void getdivisible(int* ptr,int n)
{
	printf("Number divisible by 3 and 5 : ");
	for(int i=0;i<n;i++)
	{
		if(ptr[i]%3==0&&ptr[i]%5==0)
		{
			printf("%d ",ptr[i]);	
		}
	}
	printf("\nNumber divisible by 3 but not by 5 : ");
	for(int i=0;i<n;i++)
	{	
		if(ptr[i]%3==0)
		{
			printf("%d ",ptr[i]);
		}
	}
	printf("\nNumber divisible by 5 but not by 3 : ");
	for(int i=0;i<n;i++)
	{			
		if(ptr[i]%5==0)
		{
			printf("%d ",ptr[i]);
		}
	}
	printf("\nNumbers is not divisible by 3 or 5 : ");
	for(int i=0;i<n;i++)
	{
		if(ptr[i]%3!=0&&ptr[i]%5!=0)
		{
			printf("%d ",ptr[i]);	
		}
	}
}