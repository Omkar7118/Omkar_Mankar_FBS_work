#include<stdio.h>
int prime();
void main()
{
	int x;
	x=prime();
	if(x==1)
		printf("prime number");
	else
		printf("not a prime number");
}
int prime()
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
		return 1;
	}
	else
	{
		return 0;
	}	
}