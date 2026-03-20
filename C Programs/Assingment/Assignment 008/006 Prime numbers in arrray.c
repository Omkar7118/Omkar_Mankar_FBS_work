#include<stdio.h>
void main()
{
	int n,prime;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers of array : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Prime number in your array are ");
	for(int i=0;i<n;i++)
	{
		if(arr[i] <= 1)
  			  continue;
		int flag=1;
		for(int j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			printf("%d ",arr[i]);
		}
	}
}