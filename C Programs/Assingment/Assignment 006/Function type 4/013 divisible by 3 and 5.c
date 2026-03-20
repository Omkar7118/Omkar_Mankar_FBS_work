#include<stdio.h>
int getdivisible();
void main()
{
	int n,res;
	printf("Enter any number : ");
	scanf("%d",&n);
	res=getdivisible(n);
	if(res==1)
	printf("%d is divisible by 3 and 5",n);
	else if(res==2)
	printf("%d is divisible by 3 but not by 5",n);
	else if(res==3)
	printf("%d is divisible by 5 but not by 3",n);
	else
	printf("%d is not divisible by 3 or 5",n);
}
int getdivisible(int n)
{

	if(n%3==0&&n%5==0)
	{
		return 1;
	}
	else if(n%3==0)
	{
		return 2;
	}
	else if(n%5==0)
	{
		return 3;
	}
	else
	{
		return 0;
	}	
}