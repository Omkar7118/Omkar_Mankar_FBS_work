#include<stdio.h>
void sum();
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
	sum(arr,n);
}
void sum(int* p,int n)
{	
		
	for(int i=0;i<n;i++)
	{
	int last_digit,first_digit,result,temp=p[i];
	last_digit=temp%10;
	while(temp>10)
	{
		temp=temp/10;
		first_digit=temp;
	}
	result=first_digit + last_digit;
	printf("The sum first and last digit of %d is %d\n",p[i],result);
	}
}