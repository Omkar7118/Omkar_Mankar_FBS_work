#include<stdio.h>
int greater();
void main()
{
	int a,b,c,res;
	printf("Enter any three numbers :");
	scanf("%d %d %d",&a,&b,&c);
	res=greater(a,b,c);
		if(res==1)
		{
			printf("%d is Greater than other %d %d",a,b,c);
		}
		else if(res==3)
		{
			printf("%d is Greater than other %d %d",c,a,b);
		}
		else
		{
			printf("%d is Greater than other %d %d",b,a,c);	
		}
}
int greater(int a,int b,int c)
{

	if(a>b)
	{
		if(a>c)
		{
			return 1;
		}
		else
		{
			return 3;
		}
	}
	else
	{
		if(b>c)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
}