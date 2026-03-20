#include<stdio.h>
void swap(int*);
void main()
{
	int arr[2];
	printf("Enter a and b before swap : ");
	scanf("%d %d",&arr[0],&arr[1]);
	swap(arr);
	printf("After Swap a is %d and b is %d",arr[0],arr[1]);
}
void swap(int* p)
{
	int temp;
	temp=p[0];
	p[0]=p[1];
	p[1]=temp;
}