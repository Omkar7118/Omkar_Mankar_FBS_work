#include<stdio.h>
void main()
{
	int a,b,c,d,e,average;
	printf("Enter any five numbers : ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	printf("Your five numbers are %d %d %d %d %d \n",a,b,c,d,e);
	average=(a+b+c+d+e)/10;
	printf("Average of your number is %d",average);
}