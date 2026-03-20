#include<stdio.h>
int triangle();
void main()
{	
	int x;
	x=triangle();
	if(x==0)
		printf("Triangle is equilateral");
	else if(x==1)
		printf("Triangle is isosceles");
	else
		printf("Triangle is scalene");
		
}
int triangle()
{
	int s1,s2,s3;
	printf("Enter three sides of triangle : ");
	scanf("%d %d %d",&s1,&s2,&s3);
	if(s1==s2&&s2==s3)
	{
		return 0;
	}
	else if(s1==s2||s2==s3||s1==s3)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}
