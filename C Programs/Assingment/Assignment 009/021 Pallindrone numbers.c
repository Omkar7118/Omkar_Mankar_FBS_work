#include<stdio.h>
void pallindrone();
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
	pallindrone(arr,n);
}
void pallindrone(int* p,int n)
{
	printf("Pallindrone number are ");
	for(int i=0;i<n;i++)
	{
	int reminder,rev=0,og_number;
	og_number=p[i];
	while(og_number!=0)
	{
		reminder=og_number%10;
		og_number=og_number/10;
		rev=reminder+rev*10;
		
	}
	if(rev==p[i])
	{
		printf("%d ",p[i]);
	}	
	}
	printf("\nNot Pallindrone number are ");
	for(int i=0;i<n;i++)
	{
	int reminder,rev=0,og_number;
	og_number=p[i];
	while(og_number!=0)
	{
		reminder=og_number%10;
		og_number=og_number/10;
		rev=reminder+rev*10;
		
	}
	if(rev!=p[i])
	{
		printf("%d ",p[i]);
	}	
	}
}