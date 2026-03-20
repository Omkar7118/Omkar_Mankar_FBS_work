#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,sum;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int* arr=(int*)malloc(sizeof(int)*n);
	int* brr=(int*)malloc(sizeof(int)*n);
	int* crr=(int*)malloc(sizeof(int)*n);
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
		crr[i]=arr[i]+brr[i];
	}
	printf("Sum of 1st and 2nd array is");
	for(int i=0;i<n;i++)
	{
		printf("%d ",crr[i]);
	}
	free;
}