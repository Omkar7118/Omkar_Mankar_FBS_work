#include<stdio.h>
void pallindrone();
void main()
{
	int number;
	printf("Enter a number : ");
	scanf("%d",&number);
	pallindrone(&number);
}
void pallindrone(int* number)
{
	int reminder,rev,og_number;

	og_number=*number;
	while(*number!=0)
	{
		reminder=*number%10;
		*number=*number/10;
		rev=reminder+rev*10;
		
	}
	if(rev==og_number)
	{
		printf("%d is pallindrone",og_number);
	}
	else
	{
		printf("%d is not pallindrone",og_number);
	}	
}