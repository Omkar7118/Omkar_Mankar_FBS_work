#include<stdio.h>
void main()
{
	int n,index,flag=0;
	printf("Enter size of your array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter number you want to search : ");
	scanf("%d",&index);
	for(int i=0;i<n;i++)
	{
		if(index==arr[i])
		{
			index=i;
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("Found in index %d",index);
	}
	else 
	{
		printf("Not found");
	}
}