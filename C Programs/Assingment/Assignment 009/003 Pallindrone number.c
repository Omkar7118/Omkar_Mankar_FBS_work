#include<stdio.h>
void isPallindrome(int*,int);
void main()
{
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int arr[n],temp[n];
	printf("Enter an %d to check pallindrome : ",n);	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		temp[i]=arr[i];
	}
	isPallindrome(arr,n);
	int flag=0;
	for(int i=0;i<n;i++)
	{								
		if(arr[i]==temp[i])
		{
			flag=1;
			break;
		}
		
	}
	if(flag==1)
	{
		printf("Pallindrone number are ");
	}	
	else
	{
		printf("There are no Pallindrone numbers");
	}
	for(int i=0;i<n;i++)
	{	
		if(arr[i]==temp[i])
		{
			printf("%d ",arr[i]);
		}
	}
}
void isPallindrome(int* n,int size)
{	
	int rev=0,reminder,temp;
	for(int i=0;i<size;i++)
	{
		temp=n[i];
		while(temp>0)
		{
			reminder=temp%10;
			rev=reminder+rev*10;
			temp=temp/10;
		}
		n[i]=rev;
		rev=0;
		reminder=0;
	}
}
