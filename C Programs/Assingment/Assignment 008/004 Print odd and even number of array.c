#include<stdio.h>
void main()
{
	int n;
	printf("Enter size of your array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d number of array : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
 	printf("Even numbers are ");
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d ",arr[i]);
		}
	}
	printf("\nOdd numbers are ");
	for(int i=0;i<n;i++)
	{
			if(arr[i]%2!=0)
			{
				printf("%d ",arr[i]);
			}
	}
}