#include<stdio.h>
void main()
{
	int n;
	printf("Enter size of your array : ");
	scanf("%d",&n);
	int arr[n],brr[n];
	printf("Enter %d Numbers : ",n);
	int temp;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++)
	{	
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

}