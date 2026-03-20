#include<stdio.h>
void findMax(int* ,int );
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
	findMax(arr,no);
}
void findMax(int* ptr,int n)
{
	int max1,max2,temp;
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<n-1;i++)
		{
			if(ptr[i]>ptr[i+1])
			{
				temp=ptr[i];
				ptr[i]=ptr[i+1];
				ptr[i+1]=temp;
			}
		}
	}
	max1=ptr[n-1];
	max2=ptr[n-2];
	printf("1st Maximum number is %d",max1);
	printf("\n2nd Maximum number is %d",max2);
}
