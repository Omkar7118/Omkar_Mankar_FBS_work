#include<stdio.h>
int greater();
void main()
{	
	int x;
	x=greater();
	printf("%d is the greatest number",x);
}
int greater()
{
	int a,b,c;
	printf("Enter any three numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else
	{
		if(b>c)
		{
			return b;
		}
		else
		{
			return c; 
		}
	}	
}