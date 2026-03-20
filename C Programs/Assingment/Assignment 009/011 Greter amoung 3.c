#include<stdio.h>
void greater(int*);
void main()
{
	int arr[3];
	printf("Enter 3 numbers : ");
	for(int i=0;i<3;i++)
	{
	scanf("%d",&arr[i]);
	};
	greater(arr);
}
void greater(int* a)
{

	if(a[0]>a[1])
	{
		if(a[1]>a[2])
		{
			printf("%d is Greater than other %d %d",a[0],a[1],a[2]);
		}
		else
		{
			printf("%d is Greater than other %d %d",a[2],a[0],a[1]);
		}
	}
	else
	{
		if(a[1]>a[2])
		{
			printf("%d is Greater than other %d %d",a[1],a[0],a[2]);
		}
		else
		{
			printf("%d is Greater than other %d %d",a[2],a[0],a[1]);
		}
	}	
}