#include<stdio.h>
void main()
{
	int arr[5],brr[5],crr[5],count=0;
	printf("Enter 5 elements for 1st array : ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter 5 elements for 2nd array : ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)	
		{
			if(arr[i]==brr[j])
			{		
					crr[count]=arr[i];
					count++;
			}
		}
	}
	printf("Common numbers in arrays are ");
	for(int i=0;i<count;i++)
	{
		printf("%d ",crr[i]);
	}
}