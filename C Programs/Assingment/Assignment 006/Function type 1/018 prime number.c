#include<stdio.h>
void prime();
void main()
{
	prime();	
}
void prime()
{
	int n,i=2,flag=0;
	printf("Enter a number : ");
	scanf("%d",&n);
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