#include<stdio.h>
void main()
{
	int n;
	printf("Enter size of your array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d Numbers : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int temp;
	printf("Reverse array is ");
	for(int i=0;i<n/2;i++)
	{	
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}