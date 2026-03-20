#include<stdio.h>
int odd_even();
void main()
{
	if(odd_even())
		printf("Odd");
	else
		printf("Even");
}
int odd_even()
{
	int number;
	printf("Enter a number : ");
	scanf("%d",&number);
	if(number%2==0)
	{
		return 0;
	}
	else{
		return 1;
	}	
}