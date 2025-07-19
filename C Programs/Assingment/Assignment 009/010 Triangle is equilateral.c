#include<stdio.h>
void triangle(int*);
void main()
{	
	int side[3];
	printf("Enter three sides of triangle : ");
	for(int i=0;i<3;i++)
	{
		scanf("%d",&side[i]);
	}
	triangle(side);
}
void triangle(int* s)
{

	if(s[0]==s[1]&&s[1]==s[2])
	{
		printf("Triangle is equilateral");
	}
	else if(s[0]==s[1]||s[1]==s[2]||s[0]==s[2])
	{
		printf("Triangle is isosceles");
	}
	else
	{
		printf("Triangle is scalene");
	}
}
