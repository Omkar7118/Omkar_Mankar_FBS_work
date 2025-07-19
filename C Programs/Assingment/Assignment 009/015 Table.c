#include<stdio.h>
void table();
void main()
{	
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d ages : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	table(arr,n);
}
void table(int* ptr,int n)
{	
	for(int i=0;i<n;i++)
	{
		int o=0;
		for(int j=1;j<=10;j++)
		{
			o=ptr[i]*j;
			printf("%d ",o);
		}
		printf("\n");
	}
}