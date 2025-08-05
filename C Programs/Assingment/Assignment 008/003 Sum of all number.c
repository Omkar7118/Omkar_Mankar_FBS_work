#include<stdio.h>
void main()
{
	int n;
	printf("Enter size of your array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers of your array : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum of numbers in array is %d",sum);
}