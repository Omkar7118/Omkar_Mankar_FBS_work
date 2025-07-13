#include<stdio.h>
void main()
{
	int number;
	printf("Enter a number :");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("%d is Even Number",number);
	}
	else{
		printf("%d is Odd Number",number);
	}
}