#include<stdio.h>
void greater();
void main()
{
	int a,b,c;
	printf("Enter any three numbers :");
	scanf("%d %d %d",&a,&b,&c);
	greater(&a,&b,&c);
}
void greater(int* a,int* b,int* c)
{

	if(*a>*b)
	{
		if(*a>*c)
		{
			printf("%d is Greater than other %d %d",*a,*b,*c);
		}
		else
		{
			printf("%d is Greater than other %d %d",*c,*a,*b);
		}
	}
	else
	{
		if(*b>*c)
		{
			printf("%d is Greater than other %d %d",*b,*a,*c);
		}
		else
		{
			printf("%d is Greater than other %d %d",*c,*a,*b);
		}
	}	
}