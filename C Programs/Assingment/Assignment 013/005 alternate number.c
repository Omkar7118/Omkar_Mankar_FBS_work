#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("Enter size of your array : ");
	scanf("%d",&n);
	int* arr=(int*)malloc(sizeof(int)*n);
	printf("Enter numbers of array : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i=i+2)
	{
		printf("%d ",arr[i]);
	}
	free;
}