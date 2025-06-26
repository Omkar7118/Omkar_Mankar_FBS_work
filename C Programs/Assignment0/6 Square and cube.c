#include<stdio.h>
void main()
{
	int number,square,cube;
	printf("Enter any number : ");
	scanf("%d", &number);
	square=number*number;
	cube=number*number*number;
	printf("Square of your number is %d \n",square);
	printf("Cube of your number is %d",cube);
}