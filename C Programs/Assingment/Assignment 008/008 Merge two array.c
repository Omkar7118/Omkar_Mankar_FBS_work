#include<stdio.h>
void main()
{
	int n,sum;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int arr[n],brr[n],crr[n*2];
	printf("Enter 1st array numbers ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter 2nd array numbers ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&brr[i]);
	}
	for(int i=0;i<n;i++)
	{
		crr[i]=arr[i];
	}
	for(int i=0;i<n;i++)
	{
		crr[n+i]=brr[i];
	}
	printf("Merge of two is ");
	for(int i=0;i<n*2;i++)
	{
		printf("%d ",crr[i]);
	}
	
}