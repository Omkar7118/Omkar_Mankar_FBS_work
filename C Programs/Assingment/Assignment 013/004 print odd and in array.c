#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("Enter size of your array : ");
	scanf("%d",&n);
	int* arr=(int*)malloc(sizeof(int)*n);
	printf("Enter %d number of array : ",n);
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
	free;
}