#include<stdio.h>
void main()
{
	int a=10,b=15,c;
	printf("Before swap a=%d and b=%d \n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After swap a=%d and b=%d",a,b);
}