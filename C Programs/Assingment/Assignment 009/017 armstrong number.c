#include<stdio.h>
void armstrong(int*,int);
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
	armstrong(arr,n);
}
void armstrong(int* p,int n)
{	
	printf("Armstrong numbers are ");
	for(int i=0;i<n;i++)
	{
	int original_number,result=0,reminder;
	original_number=p[i];
	while(original_number!=0)
	{
		reminder=original_number%10;
		result=reminder*reminder*reminder+result;
		original_number=original_number/10;
	}
	if(result==p[i])
	{
		printf("%d ",p[i]);
	}	
}
	printf("\nNot Armstrong numbers are ");
	for(int i=0;i<n;i++)
	{
	int original_number,result=0,reminder;
	original_number=p[i];
	while(original_number!=0)
	{
		reminder=original_number%10;
		result=reminder*reminder*reminder+result;
		original_number=original_number/10;
	}
	if(result!=p[i])
	{
		printf("%d ",p[i]);
	}	
}
}

