#include<stdio.h>
void factorial();
void main()
{
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d Numbers : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	factorial(arr,n);
}
void factorial(int* p,int n)
{
	for(int i=0;i<n;i++)
	{
	int j=1,result=1;

	while(j<=p[i])
	{
		result=j*result;
		j++;
	}
	printf("Factorial of %d is %d\n",p[i],result);
}
}