#include<stdio.h>
void pallindrone(int*,int );
void main()
{
	int no;
	printf("Enter size of array : ");
	scanf("%d",&no);
	int arr[no];
	for(int i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	pallindrone(arr,no);
}
void pallindrone(int* ptr,int n)
{
	int i=0,j=n-1,flag=0;
	while(i<n)
	{
		if(ptr[i]!=ptr[j])
		{			
			flag=1;
		}
		j--;
		i++;
	}
	if(flag==1)
	{
		printf("array is not pallindrone");
	}
	else
	{
		printf("array is pallindrone");
	}
	
}