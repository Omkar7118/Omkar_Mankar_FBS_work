#include<stdio.h>
void main()
{
	int n;
	printf("Enter size of your array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter numbers of array : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i=i+2)
	{
		printf("%d ",arr[i]);
	}
}