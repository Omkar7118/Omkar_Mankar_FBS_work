#include<stdio.h>
void swap(int*,int);
void main()
{
	int no;
	printf("Enter the size of array : ");
	scanf("%d",&no);
	int arr[no];
	printf("Enter %d elements : ",no);
	for(int i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	swap(arr,no);	
}
void swap(int* ptr,int n)
{
	int x=0,y=0,temp=0;
	printf("Enter the positions of element to exchange : ");
	scanf("%d %d",&x,&y);
	x=x-1;
	y=y-1;
	temp=ptr[x];
	ptr[x]=ptr[y];
	ptr[y]=temp;
	for(int i=0;i<n;i++)
	{
		printf("%d ",ptr[i]);
	}
}
