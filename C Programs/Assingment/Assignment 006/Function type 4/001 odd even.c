#include<stdio.h>
int odd_even();
void main()
{	
	int number,x;
	printf("Enter a number :");
	scanf("%d",&number);
	x=odd_even(number);
	if(x==1)
		printf("%d is Even Number",number);
	else
		printf("%d is Odd Number",number);
}
int odd_even(int number)
{
	
	if(number%2==0)
	{
		return 1;
	}
	else{
		return 0;
	}	
}