#include<stdio.h>
void odd_even(int*,int);
void main()
{	
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	odd_even(arr,n);
}
void odd_even(int* ptr,int n)
{	
	printf("Even numbers are ");
	for(int i=0;i<n;i++)
	{
		if(ptr[i]%2==0)
		{
			printf("%d ",ptr[i]);
		}
	}
	printf("\nOdd numbers are");
	for(int i=0;i<n;i++)
	{
		if(ptr[i]%2!=0)
		{
			printf("%d ",ptr[i]);
		}
	}
}