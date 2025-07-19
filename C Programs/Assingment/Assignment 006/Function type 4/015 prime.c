#include<stdio.h>
int prime();
void main()
{	
	int n,res;
	printf("Enter a number : ");
	scanf("%d",&n);
	res=prime(n);
	if(res==0)
	{
		printf("prime number");
	}
	else
	{
		printf("not a prime number");
	}	
}
int prime(int n)
{
	int i=2;

	while(i<n)
	{
		if(n%i==0)
		{	
			return 1;
			break;
		}
		i++;
	}
	return 0;
	
}