#include<stdio.h>
void main()
{
	int n,max,min;
	printf("Enter size of your array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("Maximun and Minumun number in array are %d and %d",max,min);
}