#include<stdio.h>
void main()
{
	float base,height,area;
	printf("Enter base and height of triangle : ");
	scanf("%f %f", &base, &height);
	area=(base+height)/2;
	printf("Area of Triangle is %f",area);
}