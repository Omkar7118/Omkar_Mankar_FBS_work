#include<stdio.h>
void prime();
void main()
{	
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	prime(n);	
}
void prime(int n)
{
	int i=2,flag=0;

	while(i<n)
	{
		if(n%i==0)
		{	
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
	{
		printf("prime number");
	}
	else
	{
		printf("not a prime number");
	}	
}