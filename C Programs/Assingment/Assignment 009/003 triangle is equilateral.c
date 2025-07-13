#include<stdio.h>
int triangle();
void main()
{	
	int s1,s2,s3,res;
	printf("Enter three sides of triangle : ");
	scanf("%d %d %d",&s1,&s2,&s3);
	res=triangle(s1,s2,s3);
	if(res==1)
		printf("Triangle is equilateral");
	else if(res==2)
		printf("Triangle is isosceles");
	else
		printf("Triangle is scalene");
}
int triangle(int s1,int s2,int s3)
{

	if(s1==s2&&s2==s3)
	{
		return 1;
	}
	else if(s1==s2||s2==s3||s1==s3)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}
