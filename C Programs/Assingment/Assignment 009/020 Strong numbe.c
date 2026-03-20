#include<stdio.h>
void strong_number();
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
	strong_number(arr,n);
}
void strong_number(int* p,int n)
{	
	printf("Strong number are ");
	for(int i=0;i<n;i++)
	{
	int original_number,reminder,result=0,j=1,f=1;

	original_number=p[i];
	while(original_number!=0)
	{
		reminder=original_number%10;
		while(j<=reminder)
		{
			f=j*f;
			j++;
		}
		j=1;
		result=f+result;
		f=1;
		original_number=original_number/10;
	}
	if(result==p[i])
	{
		printf("%d ",p[i]);
	}
	}
	printf("\nNot Strong number are ");
	for(int i=0;i<n;i++)
	{
	int original_number,reminder,result=0,j=1,f=1;

	original_number=p[i];
	while(original_number!=0)
	{
		reminder=original_number%10;
		while(j<=reminder)
		{
			f=j*f;
			j++;
		}
		j=1;
		result=f+result;
		f=1;
		original_number=original_number/10;
	}
	if(result!=p[i])
	{
		printf("%d ",p[i]);
	}
	}
}
